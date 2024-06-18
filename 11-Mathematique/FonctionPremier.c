#include <stdio.h>

// Déclaration de la fonction qui calcule la valeur de la fonction affine :
double fonctionAffine(double m, double p, double x);

int main() {
    double m, p, x, resultat;

    // Demande à l'utilisateur d'entrer les valeurs de m, p et x :
    printf("Entrez la valeur de m: ");
    scanf("%lf", &m);
    printf("Entrez la valeur de p: ");
    scanf("%lf", &p);
    printf("Entrez la valeur de x: ");
    scanf("%lf", &x);

    // Appel de la fonction pour calculer f(x) :
    resultat = fonctionAffine(m, p, x);

    // Affiche le résultat :
    printf("La valeur de f(x) pour x=%.2lf est: %.2lf\n", x, resultat);

    return 0;
}

// Définition de la fonction qui calcule la valeur de la fonction affine :
double fonctionAffine(double m, double p, double x) {
    return m * x + p;
}
