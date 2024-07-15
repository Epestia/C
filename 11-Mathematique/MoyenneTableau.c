#include <stdio.h>

int main() {
    int nombres[5];
    int somme = 0;
    double moyenne;

    // Lire 5 nombres dans un tableau (boucle for) :
    for (int i = 0; i < 5; i++) {
        printf("Entrez nombre %d : ", i + 1);
        scanf("%d", &nombres[i]);
        somme += nombres[i];
    }

    // Calculer la moyenne des nombres
    moyenne = (double)somme / 5;

    // Afficher la somme et la moyenne
    printf("La somme des nombres est : %d\n", somme);
    printf("La moyenne des nombres est : %.2lf\n", moyenne);

    return 0;
}
