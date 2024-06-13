#include <stdio.h>

int main() {
    float note1, note2, note3;
    float moyenne;

    // Lire les trois notes
    printf("Entrez la note1 sur 20 : ");
    scanf("%f", &note1);
    printf("Entrez la note2 sur 20 : ");
    scanf("%f", &note2);
    printf("Entrez la note3 sur 20 : ");
    scanf("%f", &note3);

    // Calculer la moyenne sur 100
    moyenne = ((note1 + note2 + note3) / 60) * 100;

    // Afficher la moyenne sur 100
    printf("La moyenne sur 100 est : %.2f\n", moyenne);

    return 0;
}
