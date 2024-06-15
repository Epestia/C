#include <stdio.h>
//Affiche la temperatures :
void afficher_temperatures(double temperatures[], int taille) {
    for (int i = 0; i < taille; i++) {
        printf("Température %d: %.2f°C\n", i + 1, temperatures[i]);
    }
}

int main() {
    // Déclaration d'un tableau de températures
    double temperatures[] = {23.5, 19.8, 21.4, 22.0, 18.7};
    int taille = sizeof(temperatures) / sizeof(temperatures[0]);

    // Affichage des températures encodées
    afficher_temperatures(temperatures, taille);

    return 0;
}
