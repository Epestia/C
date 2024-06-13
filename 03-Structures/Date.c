#include <stdio.h>

int estBisextile(int annee) {
    // Vérifie si une année est bissextile
    return (annee % 4 == 0 && (annee % 100 != 0 || annee % 400 == 0));
}

int estValide(int jour, int mois, int annee) {
    // Vérifie si une date est valide
    if (mois < 1 || mois > 12)
        return 0;
    
    if (jour < 1)
        return 0;

    switch (mois) {
        case 1: // janvier
        case 3: // mars
        case 5: // mai
        case 7: // juillet
        case 8: // août
        case 10: // octobre
        case 12: // décembre
            if (jour > 31)
                return 0;
            break;
        case 4: // avril
        case 6: // juin
        case 9: // septembre
        case 11: // novembre
            if (jour > 30)
                return 0;
            break;
        case 2: // février
            if (estBisextile(annee)) {
                if (jour > 29)
                    return 0;
            } else {
                if (jour > 28)
                    return 0;
            }
            break;
    }

    return 1;
}

int main() {
    // Déclaration des variables
    int jour, mois, annee;

    // Demande de saisie de la date
    printf("Entrez le jour, le mois et l'annee (jj mm aaaa) : ");
    scanf("%d %d %d", &jour, &mois, &annee);

    // Vérification de la validité de la date
    if (estValide(jour, mois, annee)) {
        printf("La date %02d/%02d/%04d est valide.\n", jour, mois, annee);
    } else {
        printf("La date %02d/%02d/%04d n'est pas valide.\n", jour, mois, annee);
    }

    return 0;
}
