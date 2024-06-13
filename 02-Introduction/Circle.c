#include <stdio.h> // Inclusion de la bibliothèque standard pour les entrées et sorties

#define PI 3.14159265358979323846 // Définition de la constante PI

int main() {
    double rayon, circonference; // Déclaration des variables pour le rayon et la circonférence

    // Demander à l'utilisateur d'entrer le rayon du cercle
    printf("Entrez le rayon du cercle : ");
    scanf("%lf", &rayon); // Lecture de l'entrée utilisateur et stockage dans la variable 'rayon'

    // Calculer la circonférence
    // Formule: C = 2 * PI * rayon
    circonference = 2 * PI * rayon;

    // Afficher la circonférence
    printf("La circonférence du cercle est : %.2lf\n", circonference); // Affichage du résultat avec deux chiffres après la virgule

    return 0; // Fin du programme
}
