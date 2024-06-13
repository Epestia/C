#include <stdio.h>

int main() {
    // Déclaration des variables
    float prix_unitaire, montant_total;
    int nombre_DVD;
    float reduction = 0.0;

    // Demande de saisie du prix unitaire et du nombre de DVD loués
    printf("Entrez le prix unitaire d'un DVD : ");
    scanf("%f", &prix_unitaire);
    printf("Entrez le nombre de DVDs loues : ");
    scanf("%d", &nombre_DVD);

    // Calcul de la réduction en fonction du nombre de DVDs
    if (nombre_DVD < 3) {
        reduction = 0.0; // pas de réduction
    } else if (nombre_DVD >= 3 && nombre_DVD <= 5) {
        reduction = 0.03; // 3% de réduction
    } else {
        reduction = 0.05; // 5% de réduction
    }

    // Calcul du montant total à payer
    montant_total = prix_unitaire * nombre_DVD * (1 - reduction);

    // Affichage du montant total
    printf("Le montant total a payer est de : %.2f euros\n", montant_total);

    return 0;
}
