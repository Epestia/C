#include <stdio.h>

int main() {
    int nombre;

    // Lire un nombre entier
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Vérifier si le nombre est pair ou impair
    if (nombre % 2 == 0) {
        printf("Le nombre est pair\n");
    } else {
        printf("Le nombre est impair\n");
    }

    return 0;
}
