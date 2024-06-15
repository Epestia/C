#include <stdio.h>
#include <math.h>

// Prototypes des fonctions :
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
double volume_pyramide(double base_carre, double hauteur);
double surface_pyramide(double base_carre, double hauteur);
double volume_parallelepipede(double longueur, double largeur, double hauteur);
double surface_parallelepipede(double longueur, double largeur, double hauteur);
double volume_prisme_triangulaire(double base, double hauteur_triangle, double hauteur_prisme);
double surface_prisme_triangulaire(double base, double hauteur_triangle, double hauteur_prisme);
double volume_tore(double rayon_interieur, double rayon_exterieur);
double surface_tore(double rayon_interieur, double rayon_exterieur);
double volume_prisme_hexagonal(double cote, double hauteur);
double surface_prisme_hexagonal(double cote, double hauteur);

int main() {
    double rayon, longueur, largeur, cote, hauteur, base, hauteur_triangle, rayon_interieur, rayon_exterieur;
    
    // Calcul et affichage de la surface d'un cercle :
    rayon = 5.0;
    printf("Surface du cercle (rayon = %.2f): %.2f\n", rayon, surface_cercle(rayon));
    
    // Calcul et affichage du volume et de la surface d'une sphère :
    rayon = 5.0;
    printf("Volume de la sphère (rayon = %.2f): %.2f\n", rayon, volume_sphere(rayon));
    printf("Surface de la sphère (rayon = %.2f): %.2f\n", rayon, surface_sphere(rayon));
    
    // Calcul et affichage de la surface d'un rectangle :
    longueur = 5.0;
    largeur = 3.0;
    printf("Surface du rectangle (longueur = %.2f, largeur = %.2f): %.2f\n", longueur, largeur, surface_rectangle(longueur, largeur));
    
    // Calcul et affichage du volume et de la surface d'un cylindre :
    rayon = 3.0;
    hauteur = 7.0;
    printf("Volume du cylindre (rayon = %.2f, hauteur = %.2f): %.2f\n", rayon, hauteur, volume_cylindre(rayon, hauteur));
    printf("Surface du cylindre (rayon = %.2f, hauteur = %.2f): %.2f\n", rayon, hauteur, surface_cylindre(rayon, hauteur));
    
    // Calcul et affichage de la surface d'un carré :
    cote = 4.0;
    printf("Surface du carré (côté = %.2f): %.2f\n", cote, surface_carre(cote));
    
    // Calcul et affichage du volume et de la surface d'un cube :
    cote = 4.0;
    printf("Volume du cube (côté = %.2f): %.2f\n", cote, volume_cube(cote));
    printf("Surface du cube (côté = %.2f): %.2f\n", cote, surface_cube(cote));
    
    // Calcul et affichage de la surface d'un triangle :
    base = 6.0;
    hauteur = 4.0;
    printf("Surface du triangle (base = %.2f, hauteur = %.2f): %.2f\n", base, hauteur, surface_triangle(base, hauteur));
    
    // Calcul et affichage du volume et de la surface d'un cône :
    rayon = 3.0;
    hauteur = 5.0;
    printf("Volume du cône (rayon = %.2f, hauteur = %.2f): %.2f\n", rayon, hauteur, volume_cone(rayon, hauteur));
    printf("Surface du cône (rayon = %.2f, hauteur = %.2f): %.2f\n", rayon, hauteur, surface_cone(rayon, hauteur));
    
    // Calcul et affichage du volume et de la surface d'une pyramide à base carrée :
    cote = 4.0;
    hauteur = 6.0;
    printf("Volume de la pyramide (base carré = %.2f, hauteur = %.2f): %.2f\n", cote, hauteur, volume_pyramide(cote, hauteur));
    printf("Surface de la pyramide (base carré = %.2f, hauteur = %.2f): %.2f\n", cote, hauteur, surface_pyramide(cote, hauteur));

    // Calcul et affichage du volume et de la surface d'un parallélépipède rectangle :
    longueur = 5.0;
    largeur = 3.0;
    hauteur = 4.0;
    printf("Volume du parallélépipède rectangle (longueur = %.2f, largeur = %.2f, hauteur = %.2f): %.2f\n", longueur, largeur, hauteur, volume_parallelepipede(longueur, largeur, hauteur));
    printf("Surface du parallélépipède rectangle (longueur = %.2f, largeur = %.2f, hauteur = %.2f): %.2f\n", longueur, largeur, hauteur, surface_parallelepipede(longueur, largeur, hauteur));
    
    // Calcul et affichage du volume et de la surface d'un prisme triangulaire :
    base = 6.0;
    hauteur_triangle = 4.0;
    hauteur = 5.0;
    printf("Volume du prisme triangulaire (base = %.2f, hauteur du triangle = %.2f, hauteur du prisme = %.2f): %.2f\n", base, hauteur_triangle, hauteur, volume_prisme_triangulaire(base, hauteur_triangle, hauteur));
    printf("Surface du prisme triangulaire (base = %.2f, hauteur du triangle = %.2f, hauteur du prisme = %.2f): %.2f\n", base, hauteur_triangle, hauteur, surface_prisme_triangulaire(base, hauteur_triangle, hauteur));
    
    // Calcul et affichage du volume et de la surface d'un tore :
    rayon_interieur = 2.0;
    rayon_exterieur = 5.0;
    printf("Volume du tore (rayon intérieur = %.2f, rayon extérieur = %.2f): %.2f\n", rayon_interieur, rayon_exterieur, volume_tore(rayon_interieur, rayon_exterieur));
    printf("Surface du tore (rayon intérieur = %.2f, rayon extérieur = %.2f): %.2f\n", rayon_interieur, rayon_exterieur, surface_tore(rayon_interieur, rayon_exterieur));

    // Calcul et affichage du volume et de la surface d'un prisme hexagonal :
    cote = 3.0;
    hauteur = 10.0;
    printf("Volume du prisme hexagonal (côté = %.2f, hauteur = %.2f): %.2f\n", cote, hauteur, volume_prisme_hexagonal(cote, hauteur));
    printf("Surface du prisme hexagonal (côté = %.2f, hauteur = %.2f): %.2f\n", cote, hauteur, surface_prisme_hexagonal(cote, hauteur));
    
    return 0;
}

// Fonction pour calculer la surface d'un cercle :
double surface_cercle(double rayon) {
    return M_PI * rayon * rayon;
}

// Fonction pour calculer le volume d'une sphère :
double volume_sphere(double rayon) {
    return (4.0/3.0) * M_PI * pow(rayon, 3);
}

// Fonction pour calculer la surface d'une sphère :
double surface_sphere(double rayon) {
    return 4.0 * M_PI * rayon * rayon;
}

// Fonction pour calculer la surface d'un rectangle :
double surface_rectangle(double longueur, double largeur) {
    return longueur * largeur;
}

// Fonction pour calculer le volume d'un cylindre :
double volume_cylindre(double rayon, double hauteur) {
    return M_PI * rayon * rayon * hauteur;
}

// Fonction pour calculer la surface d'un cylindre :
double surface_cylindre(double rayon, double hauteur) {
    return 2.0 * M_PI * rayon * (rayon + hauteur);
}

// Fonction pour calculer la surface d'un carré :
double surface_carre(double cote) {
    return cote * cote;
}

// Fonction pour calculer le volume d'un cube :
double volume_cube(double cote) {
    return cote * cote * cote;
}

// Fonction pour calculer la surface d'un cube :
double surface_cube(double cote) {
    return 6.0 * cote * cote;
}

// Fonction pour calculer la surface d'un triangle :
double surface_triangle(double base, double hauteur) {
    return (base * hauteur) / 2.0;
}

// Fonction pour calculer le volume d'un cône :
double volume_cone(double rayon, double hauteur) {
    return (1.0/3.0) * M_PI * rayon * rayon * hauteur;
}

// Fonction pour calculer la surface d'un cône :
double surface_cone(double rayon, double hauteur) {
    double generatrice = sqrt(rayon * rayon + hauteur * hauteur);
    return M_PI * rayon * (rayon + generatrice);
}

// Fonction pour calculer le volume d'une pyramide à base carrée :
double volume_pyramide(double base_carre, double hauteur) {
    return (1.0/3.0) * base_carre * base_carre * hauteur;
}

// Fonction pour calculer la surface d'une pyramide à base carrée :
double surface_pyramide(double base_carre, double hauteur) {
    double apotheme = sqrt((base_carre / 2.0) * (base_carre / 2.0) + hauteur * hauteur);
    return base_carre * base_carre + 2 * base_carre * apotheme;
}

// Fonction pour calculer le volume d'un parallélépipède rectangle :
double volume_parallelepipede(double longueur, double largeur, double hauteur) {
    return longueur * largeur * hauteur;
}

// Fonction pour calculer la surface d'un parallélépipède rectangle :
double surface_parallelepipede(double longueur, double largeur, double hauteur) {
    return 2 * (longueur * largeur + longueur * hauteur + largeur * hauteur);
}

// Fonction pour calculer le volume d'un prisme triangulaire :
double volume_prisme_triangulaire(double base, double hauteur_triangle, double hauteur_prisme) {
    return (base * hauteur_triangle / 2.0) * hauteur_prisme;
}

// Fonction pour calculer la surface d'un prisme triangulaire :
double surface_prisme_triangulaire(double base, double hauteur_triangle, double hauteur_prisme) {
    double cote = sqrt((base / 2.0) * (base / 2.0) + hauteur_triangle * hauteur_triangle);
    return base * hauteur_prisme + 2 * cote * hauteur_prisme + base * hauteur_triangle;
}

// Fonction pour calculer le volume d'un tore :
double volume_tore(double rayon_interieur, double rayon_exterieur) {
    double rayon_tube = (rayon_exterieur - rayon_interieur) / 2.0;
    double rayon_centre = rayon_interieur + rayon_tube;
    return 2 * M_PI * M_PI * rayon_centre * rayon_tube * rayon_tube;
}

// Fonction pour calculer la surface d'un tore :
double surface_tore(double rayon_interieur, double rayon_exterieur) {
    double rayon_tube = (rayon_exterieur - rayon_interieur) / 2.0;
    double rayon_centre = rayon_interieur + rayon_tube;
    return 4 * M_PI * M_PI * rayon_centre * rayon_tube;
}

// Fonction pour calculer le volume d'un prisme hexagonal : 
double volume_prisme_hexagonal(double cote, double hauteur) {
    double aire_base = (3 * sqrt(3) / 2) * cote * cote;
    return aire_base * hauteur;
}

// Fonction pour calculer la surface d'un prisme hexagonal :
double surface_prisme_hexagonal(double cote, double hauteur) {
    double perimetre_base = 6 * cote;
    double aire_base = (3 * sqrt(3) / 2) * cote * cote;
    return 2 * aire_base + perimetre_base * hauteur;
}
