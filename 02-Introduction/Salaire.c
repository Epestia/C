#include <stdio.h>

int main() {
    double salaire_horaire, heures, taux_retenue;
    double salaire_brut, retenue, salaire_net;

    // Demander à l'utilisateur d'entrer le salaire horaire, le nombre d'heures prestées et le taux de retenue
    printf("Entrez le salaire horaire brut : ");
    scanf("%lf", &salaire_horaire);
    printf("Entrez le nombre d'heures prestées : ");
    scanf("%lf", &heures);
    printf("Entrez le taux de retenue (en pourcentage) : ");
    scanf("%lf", &taux_retenue);

    // Calculer le salaire brut total, le montant de la retenue et le salaire net total
    salaire_brut = salaire_horaire * heures;
    retenue = salaire_brut * (taux_retenue / 100);
    salaire_net = salaire_brut - retenue;

    // Afficher les résultats
    printf("Le salaire brut total est : %.2lf\n", salaire_brut);
    printf("Le montant de la retenue est : %.2lf\n", retenue);
    printf("Le salaire net total est : %.2lf\n", salaire_net);

    return 0;
}
