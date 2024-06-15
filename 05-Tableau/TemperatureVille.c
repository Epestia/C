#include <stdio.h>

#define VILLES 10
#define JOURS 7

float temperature[VILLES][JOURS];
float resultat[VILLES][3]; // 0: min, 1: max, 2: moyenne

void saisirTemperatures() {
    for (int ville = 0; ville < VILLES; ville++) {
        printf("Entrez les temperatures pour la ville %d:\n", ville + 1);
        for (int jour = 0; jour < JOURS; jour++) {
            printf("Jour %d: ", jour + 1);
            scanf("%f", &temperature[ville][jour]);
        }
    }
}

void calculerResultats() {
    for (int ville = 0; ville < VILLES; ville++) {
        float min = temperature[ville][0];
        float max = temperature[ville][0];
        float sum = 0.0;

        for (int jour = 0; jour < JOURS; jour++) {
            if (temperature[ville][jour] < min) {
                min = temperature[ville][jour];
            }
            if (temperature[ville][jour] > max) {
                max = temperature[ville][jour];
            }
            sum += temperature[ville][jour];
        }

        resultat[ville][0] = min;
        resultat[ville][1] = max;
        resultat[ville][2] = sum / JOURS;
    }
}

void afficherResultats() {
    for (int ville = 0; ville < VILLES; ville++) {
        printf("Ville %d:\n", ville + 1);
        printf("Temperatures: ");
        for (int jour = 0; jour < JOURS; jour++) {
            printf("%.2f ", temperature[ville][jour]);
        }
        printf("\n");
        printf("Min: %.2f, Max: %.2f, Moyenne: %.2f\n", resultat[ville][0], resultat[ville][1], resultat[ville][2]);
    }
}

int main() {
    saisirTemperatures();
    calculerResultats();
    afficherResultats();
    return 0;
}
