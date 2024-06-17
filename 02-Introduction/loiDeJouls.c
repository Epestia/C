#include <stdio.h>

// Fonction pour calculer la puissance en utilisant la loi de Joule
double puissance(double courant, double resistance) {
    return courant * courant * resistance;
}

int main() {
    double courant, resistance;

    // Demande à l'utilisateur d'entrer le courant et la résistance
    printf("Entrez le courant (en ampères): ");
    scanf("%lf", &courant);

    printf("Entrez la résistance (en ohms): ");
    scanf("%lf", &resistance);

    // Calcul de la puissance
    double puissance_calculée = puissance(courant, resistance);

    // Affichage du résultat
    printf("La puissance électrique est: %.2f watts\n", puissance_calculée);

    return 0;
}
