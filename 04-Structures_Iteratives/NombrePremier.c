#include <stdio.h>
#include <stdbool.h> // Pour utiliser le type bool et les valeurs true/false

bool estPremier(int nombre) {
    if (nombre <= 1) {
        return false; // Les nombres <= 1 ne sont pas premiers
    }
    for (int i = 2; i * i <= nombre; ++i) {
        if (nombre % i == 0) {
            return false; // Si nombre est divisible par i, alors il n'est pas premier
        }
    }
    return true; // Si aucun diviseur trouvé, nombre est premier
}

int main() {
    // Déclaration des variables
    int nombre;

    // Lecture du nombre à vérifier
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    // Vérification si le nombre est premier
    if (estPremier(nombre)) {
        printf("%d est un nombre premier.\n", nombre);
    } else {
        printf("%d n'est pas un nombre premier.\n", nombre);
    }

    return 0;
}
