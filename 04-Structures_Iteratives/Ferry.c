#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define MAX_PLACES 100
#define MAX_WEIGHT 95000

typedef enum { EMPTY, LOADED, FULL, READY_FOR_SEA, UNLOADING } Status;

typedef struct {
    char plate[10];
    int places;
    int weight;
    char type[10];
} Vehicle;

typedef struct {
    char id[50];
    Vehicle vehicles[MAX_PLACES];
    int num_vehicles;
    int total_places;
    int total_weight;
    Status status;
} Ferry;

typedef struct {
    char name[50];
    Ferry *current_ferry;
} LoadMaster;

void log_message(const char *ferry_id, const char *message) {
    char filename[100];
    snprintf(filename, 100, "c:/temp/%s.log", ferry_id);
    FILE *logfile = fopen(filename, "a");
    if (logfile != NULL) {
        time_t now = time(NULL);
        char *date_time = ctime(&now);
        date_time[strlen(date_time) - 1] = '\0'; // Remove newline character
        fprintf(logfile, "%s %s\n", date_time, message);
        fclose(logfile);
    }
}

void raise_exception(const char *plate, const char *message) {
    char full_message[100];
    snprintf(full_message, 100, "Vehicle %s not added. %s", plate, message);
    printf("Exception: %s\n", full_message);
    log_message("ferry", full_message); // Assume ferry ID is "ferry" for logging purposes
}

void add_vehicle(Ferry *ferry, Vehicle vehicle) {
    if (ferry->total_places + vehicle.places > MAX_PLACES) {
        raise_exception(vehicle.plate, "Exceed place disponibility.");
        return;
    }
    if (ferry->total_weight + vehicle.weight > MAX_WEIGHT) {
        raise_exception(vehicle.plate, "Exceed weight.");
        return;
    }
    ferry->vehicles[ferry->num_vehicles++] = vehicle;
    ferry->total_places += vehicle.places;
    ferry->total_weight += vehicle.weight;
    ferry->status = LOADED;
    if (ferry->total_places == MAX_PLACES || ferry->total_weight == MAX_WEIGHT) {
        ferry->status = FULL;
    }
}

void remove_vehicle(Ferry *ferry) {
    if (ferry->num_vehicles == 0) return;
    Vehicle vehicle = ferry->vehicles[--ferry->num_vehicles];
    ferry->total_places -= vehicle.places;
    ferry->total_weight -= vehicle.weight;
    if (ferry->num_vehicles == 0) {
        ferry->status = EMPTY;
    } else {
        ferry->status = LOADED;
    }
}

void print_ferry(Ferry *ferry) {
    printf("Ferry ID: %s\n", ferry->id);
    printf("Status: %d\n", ferry->status);
    printf("Total Places: %d\n", ferry->total_places);
    printf("Total Weight: %d\n", ferry->total_weight);
    printf("Number of Vehicles: %d\n", ferry->num_vehicles);
    for (int i = 0; i < ferry->num_vehicles; i++) {
        printf("Vehicle %d: %s, Type: %s, Places: %d, Weight: %d\n", i + 1, ferry->vehicles[i].plate, ferry->vehicles[i].type, ferry->vehicles[i].places, ferry->vehicles[i].weight);
    }
}


//fonction main :
int main() {
    Ferry ferry = { "Ferry123", {{0}}, 0, 0, 0, EMPTY };
    LoadMaster lm = { "LoadMaster1", &ferry };

    Vehicle bus = { "BUS123", 3, 4000, "Bus" };
    Vehicle van = { "VAN123", 2, 2200, "Van" };
    Vehicle car = { "CAR123", 1, 1500, "Car" };

    add_vehicle(&ferry, bus);
    add_vehicle(&ferry, van);
    add_vehicle(&ferry, car);

    print_ferry(&ferry);

    lm.current_ferry->status = READY_FOR_SEA;
    printf("Status changed to READY_FOR_SEA\n");

    lm.current_ferry->status = UNLOADING;
    while (ferry.num_vehicles > 0) {
        remove_vehicle(&ferry);
    }
    printf("All vehicles removed. Status: EMPTY\n");

    print_ferry(&ferry);

    return 0;
}

