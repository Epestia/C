#include <stdio.h>
#include <math.h>
#include <stdlib.h>

// Fonction pour générer les valeurs de la courbe de Gauss
void generate_gaussian_curve(double mean, double stddev, int points, const char *filename) {
    FILE *file = fopen(filename, "w");
    if (file == NULL) {
        perror("Error opening file");
        exit(EXIT_FAILURE);
    }

    double step = (6 * stddev) / (points - 1);
    double start = mean - 3 * stddev;

    for (int i = 0; i < points; ++i) {
        double x = start + i * step;
        double y = (1 / (stddev * sqrt(2 * M_PI))) * exp(-0.5 * pow((x - mean) / stddev, 2));
        fprintf(file, "%lf %lf\n", x, y);
    }

    fclose(file);
}

// Fonction pour afficher la courbe en utilisant gnuplot
void plot_gaussian_curve(const char *filename) {
    char command[256];
    snprintf(command, sizeof(command), "gnuplot -p -e \"plot '%s' with lines\"", filename);
    system(command);
}

int main() {
    double mean = 0.0;       // Moyenne
    double stddev = 1.0;     // Écart type
    int points = 100;        // Nombre de points à générer
    const char *filename = "gaussian_curve.dat";

    // Générer les valeurs de la courbe de Gauss
    generate_gaussian_curve(mean, stddev, points, filename);

    // Afficher la courbe
    plot_gaussian_curve(filename);

    return 0;
}
