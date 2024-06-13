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
    // Affichage des nombres premiers entre 1 et 1000
    printf("Nombres premiers entre 1 et 1000 :\n");
    for (int i = 2; i <= 1000; ++i) {
        if (estPremier(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
