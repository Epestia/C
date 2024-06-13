#include <stdio.h>
#include <limits.h> // Pour INT_MIN et INT_MAX

int main() {
    // Déclaration des variables :
    int nombre, max, min, somme = 0;
    float moyenne;

    // Lecture de 10 nombres
    printf("Entrez 10 nombres :\n");
    scanf("%d", &nombre); // Lecture du premier nombre pour initialisation
    max = min = somme = nombre; // Initialisation de max, min et somme avec le premier nombre

    for (int i = 1; i < 10; ++i) {
        scanf("%d", &nombre);
        somme += nombre;

        if (nombre > max) {
            max = nombre;
        }
        if (nombre < min) {
            min = nombre;
        }
    }

    // Calcul de la moyenne
    moyenne = (float)somme / 10.0;

    // Affichage du maximum, minimum et moyenne
    printf("Maximum : %d (numéro d'ordre : ?)\n", max); // Numéro d'ordre n'est pas implémenté ici
    printf("Minimum : %d (numéro d'ordre : ?)\n", min); // Numéro d'ordre n'est pas implémenté ici
    printf("Moyenne : %.2f\n", moyenne);

    return 0;
}
