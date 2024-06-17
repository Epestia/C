#include <stdio.h>

typedef struct {
    char *name;
    int wavelength;
} Color;

int main() {
    Color colors[] = {
        {"Violet", 380},
        {"Indigo", 445},
        {"Bleu", 475},
        {"Cyan", 500},
        {"Vert", 510},
        {"Jaune", 570},
        {"Orange", 590},
        {"Rouge", 650}
    };

    int num_colors = sizeof(colors) / sizeof(colors[0]);

    printf("Couleurs et leurs longueurs d'onde correspondantes:\n");
    for (int i = 0; i < num_colors; i++) {
        printf("%s: %d nm\n", colors[i].name, colors[i].wavelength);
    }

    return 0;
}
