#include <stdio.h>
#include <math.h>

// Prototypes des fonctions
double surface_cercle(double rayon);
double volume_sphere(double rayon);
double surface_sphere(double rayon);
double surface_rectangle(double longueur, double largeur);
double volume_cylindre(double rayon, double hauteur);
double surface_cylindre(double rayon, double hauteur);
double surface_carre(double cote);
double volume_cube(double cote);
double surface_cube(double cote);
double surface_triangle(double base, double hauteur);
double volume_cone(double rayon, double hauteur);
double surface_cone(double rayon, double hauteur);

int main() {
    double rayon, longueur, largeur, cote, hauteur, base;
    
    // Calcul et affichage de la surface d'un cercle
    rayon = 5.0;
    printf("Surface du cercle (rayon = %.2f): %.2f\n", rayon, surface_cercle(rayon));
    
    // Calcul et affichage du volume et de la surface d'une sphère
    rayon = 5.0;
    printf("Volume de la sphère (rayon = %.2f): %.2f\n", rayon, volume_sphere(rayon));
    printf("Surface de la sphère (rayon = %.2f): %.2f\n", rayon, surface_sphere(rayon));
    
    // Calcul et affichage de la surface d'un rectangle
    longueur = 5.0;
    largeur = 3.0;
    printf("Surface du rectangle (longueur = %.2f, largeur = %.2f): %.2f\n", longueur, largeur, surface_rectangle(longueur, largeur));
    
    // Calcul et affichage du volume et de la surface d'un cylindre
    rayon = 3.0;
    hauteur = 7.0;
    printf("Volume du cylindre (rayon = %.2f, hauteur = %.2f): %.2f\n", rayon, hauteur, volume_cylindre(rayon, hauteur));
    printf("Surface du cylindre (rayon = %.2f, hauteur = %.2f): %.2f\n", rayon, hauteur, surface_cylindre(rayon, hauteur));
    
    // Calcul et affichage de la surface d'un carré
    cote = 4.0;
    printf("Surface du carré (côté = %.2f): %.2f\n", cote, surface_carre(cote));
    
    // Calcul et affichage du volume et de la surface d'un cube
    cote = 4.0;
    printf("Volume du cube (côté = %.2f): %.2f\n", cote, volume_cube(cote));
    printf("Surface du cube (côté = %.2f): %.2f\n", cote, surface_cube(cote));
    
    // Calcul et affichage de la surface d'un triangle
    base = 6.0;
    hauteur = 4.0;
    printf("Surface du triangle (base = %.2f, hauteur = %.2f): %.2f\n", base, hauteur, surface_triangle(base, hauteur));
    
    // Calcul et affichage du volume et de la surface d'un cône
    rayon = 3.0;
    hauteur = 5.0;
    printf("Volume du cône (rayon = %.2f, hauteur = %.2f): %.2f\n", rayon, hauteur, volume_cone(rayon, hauteur));
    printf("Surface du cône (rayon = %.2f, hauteur = %.2f): %.2f\n", rayon, hauteur, surface_cone(rayon, hauteur));
    
    return 0;
}

// Fonction pour calculer la surface d'un cercle
double surface_cercle(double rayon) {
    return M_PI * rayon * rayon;
}

// Fonction pour calculer le volume d'une sphère
double volume_sphere(double rayon) {
    return (4.0/3.0) * M_PI * pow(rayon, 3);
}

// Fonction pour calculer la surface d'une sphère
double surface_sphere(double rayon) {
    return 4.0 * M_PI * rayon * rayon;
}

// Fonction pour calculer la surface d'un rectangle
double surface_rectangle(double longueur, double largeur) {
    return longueur * largeur;
}

// Fonction pour calculer le volume d'un cylindre
double volume_cylindre(double rayon, double hauteur) {
    return M_PI * rayon * rayon * hauteur;
}

// Fonction pour calculer la surface d'un cylindre
double surface_cylindre(double rayon, double hauteur) {
    return 2.0 * M_PI * rayon * (rayon + hauteur);
}

// Fonction pour calculer la surface d'un carré
double surface_carre(double cote) {
    return cote * cote;
}

// Fonction pour calculer le volume d'un cube
double volume_cube(double cote) {
    return cote * cote * cote;
}

// Fonction pour calculer la surface d'un cube
double surface_cube(double cote) {
    return 6.0 * cote * cote;
}

// Fonction pour calculer la surface d'un triangle
double surface_triangle(double base, double hauteur) {
    return (base * hauteur) / 2.0;
}

// Fonction pour calculer le volume d'un cône
double volume_cone(double rayon, double hauteur) {
    return (1.0/3.0) * M_PI * rayon * rayon * hauteur;
}

// Fonction pour calculer la surface d'un cône
double surface_cone(double rayon, double hauteur) {
    double generatrice = sqrt(rayon * rayon + hauteur * hauteur);
    return M_PI * rayon * (rayon + generatrice);
}
