#include <stdio.h>

// Fonction pour vérifier si une date est valide
int estDateValide(int jour, int mois, int annee) {
    // Vérifie si une date est valide
    if (mois < 1 || mois > 12)
        return 0;

    int jours_par_mois[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (mois == 2) {
        if ((annee % 4 == 0 && annee % 100 != 0) || (annee % 400 == 0)) {
            if (jour > 29)
                return 0;
        } else {
            if (jour > 28)
                return 0;
        }
    } else {
        if (jour > jours_par_mois[mois - 1])
            return 0;
    }

    return 1;
}

// Fonction pour vérifier la validité d'un numéro national belge
int estNumeroNationalValide(long long numero) {
    // Vérifie la validité d'un numéro national belge
    if (numero < 10000000000LL || numero > 99999999999LL)
        return 0;

    // Extraction des parties du numéro national
    int jour = numero / 100000000LL;
    int mois = (numero / 1000000LL) % 100;
    int annee = (numero / 10000LL) % 100;
    int sequence = (numero / 10LL) % 1000;
    int cle = numero % 10;

    // Vérification de la validité de la date
    if (!estDateValide(jour, mois, annee))
        return 0;

    // Vérification de la validité de la séquence
    if (sequence < 1 || sequence > 997)
        return 0;

    // Calcul de la clé de contrôle
    int cle_calculee = 97 - (numero % 97);

    // Vérification de la clé de contrôle
    if (cle_calculee != cle)
        return 0;

    return 1;
}

int main() {
    // Déclaration des variables :
    long long numero_national;

    // Demande de saisie du numéro national
    printf("Entrez le numero national belge (11 chiffres) : ");
    scanf("%lld", &numero_national);

    // Vérification de la validité du numéro national
    if (estNumeroNationalValide(numero_national)) {
        printf("Numero national valide.\n");
    } else {
        printf("Numero national non valide.\n");
    }

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Déclarer les variables nécessaires : numero_national, jour, mois, annee, sequence, cle
2. Lire le numéro national belge depuis l'utilisateur (un entier de 11 chiffres)
3. Extraire les parties du numéro national :
4.     jour = deux premiers chiffres du numéro national
5.     mois = chiffres 3 et 4 du numéro national
6.     annee = chiffres 5 à 6 du numéro national
7.     sequence = chiffres 7 à 9 du numéro national
8.     cle = dernier chiffre du numéro national
9. Vérifier si le numéro national a exactement 11 chiffres.
10. Si le numéro a exactement 11 chiffres alors
11.     Vérifier si jour, mois et annee forment une date valide
12.     Vérifier si la séquence est un nombre valide (entre 1 et 997)
13.     Calculer la clé de contrôle et vérifier si elle correspond à la clé fournie
14.     Afficher "Numéro national valide" si toutes les conditions sont satisfaites
15. Sinon
16.     Afficher "Numéro national non valide"
17. Sinon
18.     Afficher "Le numéro national doit avoir exactement 11 chiffres"
19. Fin Si
*/
