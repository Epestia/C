#include <stdio.h>
#include <limits.h> // Pour INT_MIN et INT_MAX

int main() {
    // Déclaration des variables
    int nombre, max, min, somme = 0;
    float moyenne;
    int num_max = 0, num_min = 0;
    
    // Lecture de 10 nombres
    printf("Entrez 10 nombres :\n");
    scanf("%d", &nombre); // Lecture du premier nombre pour initialisation
    max = min = somme = nombre; // Initialisation de max, min et somme avec le premier nombre

    for (int i = 1; i < 10; ++i) {
        scanf("%d", &nombre);
        somme += nombre;

        if (nombre > max) {
            max = nombre;
            num_max = i;
        }
        if (nombre < min) {
            min = nombre;
            num_min = i;
        }
    }

    // Calcul de la moyenne
    moyenne = (float)somme / 10.0;

    // Affichage du maximum, minimum, leur numéro d'ordre et moyenne
    printf("Maximum : %d (numéro d'ordre : %d)\n", max, num_max + 1);
    printf("Minimum : %d (numéro d'ordre : %d)\n", min, num_min + 1);
    printf("Moyenne : %.2f\n", moyenne);

    return 0;
}
