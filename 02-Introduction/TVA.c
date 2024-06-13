#include <stdio.h>

int main() {
    double prix, tva;
    double montant_tva, prix_ttc;

    // Demander à l'utilisateur d'entrer le prix de l'article et le taux de TVA
    printf("Entrez le prix de l'article : ");
    scanf("%lf", &prix);
    printf("Entrez le taux de TVA (en pourcentage) : ");
    scanf("%lf", &tva);

    // Calculer le montant de la TVA et le prix TVA comprise
    montant_tva = prix * (tva / 100);
    prix_ttc = prix + montant_tva;

    // Afficher les résultats
    printf("Le montant de la TVA est : %.2lf\n", montant_tva);
    printf("Le prix TVA comprise est : %.2lf\n", prix_ttc);

    return 0;
}
