#include <stdio.h>

// Définition de la structure pour un nombre complexe
typedef struct {
    double reel;    // Partie réelle
    double imag;    // Partie imaginaire
} Complexe;

// Fonction pour afficher un nombre complexe
void afficherComplexe(Complexe z) {
    if (z.imag >= 0) {
        printf("%.2f + %.2fi\n", z.reel, z.imag);
    } else {
        printf("%.2f - %.2fi\n", z.reel, -z.imag);
    }
}

// Fonction pour additionner deux nombres complexes
Complexe additionner(Complexe z1, Complexe z2) {
    Complexe resultat;
    resultat.reel = z1.reel + z2.reel;
    resultat.imag = z1.imag + z2.imag;
    return resultat;
}

// Fonction pour soustraire deux nombres complexes
Complexe soustraire(Complexe z1, Complexe z2) {
    Complexe resultat;
    resultat.reel = z1.reel - z2.reel;
    resultat.imag = z1.imag - z2.imag;
    return resultat;
}

// Fonction pour multiplier deux nombres complexes
Complexe multiplier(Complexe z1, Complexe z2) {
    Complexe resultat;
    resultat.reel = z1.reel * z2.reel - z1.imag * z2.imag;
    resultat.imag = z1.reel * z2.imag + z1.imag * z2.reel;
    return resultat;
}

// Fonction pour diviser deux nombres complexes
Complexe diviser(Complexe z1, Complexe z2) {
    Complexe resultat;
    double denominateur = z2.reel * z2.reel + z2.imag * z2.imag;
    resultat.reel = (z1.reel * z2.reel + z1.imag * z2.imag) / denominateur;
    resultat.imag = (z1.imag * z2.reel - z1.reel * z2.imag) / denominateur;
    return resultat;
}

int main() {
    // Déclaration de deux nombres complexes
    Complexe z1 = {3.0, 4.0};   // 3 + 4i
    Complexe z2 = {1.0, -2.0};  // 1 - 2i

    // Affichage des nombres complexes
    printf("z1 = ");
    afficherComplexe(z1);

    printf("z2 = ");
    afficherComplexe(z2);

    // Calcul et affichage de résultats d'opérations
    Complexe somme = additionner(z1, z2);
    printf("Addition z1 + z2 = ");
    afficherComplexe(somme);

    Complexe difference = soustraire(z1, z2);
    printf("Soustraction z1 - z2 = ");
    afficherComplexe(difference);

    Complexe produit = multiplier(z1, z2);
    printf("Multiplication z1 * z2 = ");
    afficherComplexe(produit);

    Complexe quotient = diviser(z1, z2);
    printf("Division z1 / z2 = ");
    afficherComplexe(quotient);

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Définir une structure Complexe avec les champs reel et imag.
2. Définir des fonctions pour chaque opération :
3.     Fonction afficherComplexe(z) :
4.         Affiche le nombre complexe z sous la forme a + bi.
5.     Fonction additionner(z1, z2) :
6.         Additionne deux nombres complexes z1 et z2.
7.     Fonction soustraire(z1, z2) :
8.         Soustrait deux nombres complexes z1 et z2.
9.     Fonction multiplier(z1, z2) :
10.        Multiplie deux nombres complexes z1 et z2.
11.    Fonction diviser(z1, z2) :
12.        Divise deux nombres complexes z1 et z2.
13.    Fonction principale main() :
14.        Déclarer deux nombres complexes z1 et z2.
15.        Afficher les nombres complexes z1 et z2.
16.        Calculer et afficher les résultats des opérations d'addition, soustraction, multiplication et division.
17.    Fin de la fonction principale.
*/
