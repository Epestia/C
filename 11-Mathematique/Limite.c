#include <stdio.h>
#include <math.h>

// Déclaration des fonctions
double polynome(double x);
double exponentielle(double x);
double logarithme(double x);
double rationnelle(double x);
double calcule_limite(double (*fonction)(double), double x0, double epsilon);
void menu();

int main() {
    int choix;
    double x0, epsilon = 0.0001;
    double limite_gauche, limite_droite;
    double (*fonction)(double) = NULL;

    // Affichage du menu
    menu();
    printf("Choisissez le type de fonction : ");
    scanf("%d", &choix);

    // Sélection de la fonction selon le choix de l'utilisateur
    switch (choix) {
        case 1:
            fonction = polynome;
            break;
        case 2:
            fonction = exponentielle;
            break;
        case 3:
            fonction = logarithme;
            break;
        case 4:
            fonction = rationnelle;
            break;
        default:
            printf("Choix invalide.\n");
            return 1;
    }

    // Demande à l'utilisateur d'entrer le point x0
    printf("Entrez la valeur de x0 pour laquelle vous voulez calculer la limite : ");
    scanf("%lf", &x0);

    // Calcul des limites à gauche et à droite
    limite_gauche = calcule_limite(fonction, x0 - epsilon, epsilon);
    limite_droite = calcule_limite(fonction, x0 + epsilon, epsilon);

    // Affichage des résultats
    printf("Limite de f(x) en x0 par la gauche : %.5f\n", limite_gauche);
    printf("Limite de f(x) en x0 par la droite : %.5f\n", limite_droite);

    // Vérification si les limites à gauche et à droite sont égales
    if (fabs(limite_gauche - limite_droite) < epsilon) {
        printf("La limite de f(x) en x0 existe et vaut : %.5f\n", (limite_gauche + limite_droite) / 2);
    } else {
        printf("La limite de f(x) en x0 n'existe pas.\n");
    }

    return 0;
}

// Menu pour choisir le type de fonction
void menu() {
    printf("Choisissez le type de fonction à étudier :\n");
    printf("1. Polynôme (ex: 3x^2 + 2x + 1)\n");
    printf("2. Fonction exponentielle (ex: e^x)\n");
    printf("3. Fonction logarithmique (ex: log(x))\n");
    printf("4. Fonction rationnelle (ex: 1/x)\n");
}

// Fonction polynomiale : f(x) = 3x^2 + 2x + 1
double polynome(double x) {
    return 3 * pow(x, 2) + 2 * x + 1;
}

// Fonction exponentielle : f(x) = e^x
double exponentielle(double x) {
    return exp(x);
}

// Fonction logarithmique : f(x) = log(x)
double logarithme(double x) {
    if (x <= 0) {
        printf("Erreur : logarithme défini pour x > 0 uniquement.\n");
        return NAN; // Retourne "Not a Number" si x <= 0
    }
    return log(x);
}

// Fonction rationnelle : f(x) = 1/x
double rationnelle(double x) {
    if (x == 0) {
        printf("Erreur : division par zéro.\n");
        return NAN; // Retourne "Not a Number" si x == 0
    }
    return 1 / x;
}

// Fonction pour calculer la limite d'une fonction donnée en x0
double calcule_limite(double (*fonction)(double), double x0, double epsilon) {
    return fonction(x0);
}
