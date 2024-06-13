#include <stdio.h>

int main() {
    // Déclaration des variables
    int nombre;
    int somme = 0;

    // Lecture de 10 nombres et calcul de la somme
    printf("Entrez 10 nombres :\n");
    for (int i = 0; i < 10; ++i) {
        scanf("%d", &nombre);
        somme += nombre;
    }

    // Affichage de la somme
    printf("La somme des 10 nombres est : %d\n", somme);

    return 0;
}
