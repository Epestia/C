#include <stdio.h>

int main() {
    int n;

    // Demande de l'entrée utilisateur
    printf("Entrez un nombre pour calculer la suite de Syracuse : ");
    scanf("%d", &n);

    // Vérification que l'entrée est positive
    if (n <= 0) {
        printf("Veuillez entrer un nombre entier positif.\n");
        return 1;
    }

    // Affichage et calcul de la suite de Syracuse
    printf("Suite de Syracuse pour %d : ", n);
    while (n != 1) {
        printf("%d ", n);
        if (n % 2 == 0) {
            n = n / 2; // Si n est pair
        } else {
            n = 3 * n + 1; // Si n est impair
        }
    }
    printf("1\n"); // Affiche 1 à la fin de la suite

    return 0;
}
