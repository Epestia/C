#include <stdio.h>

int main() {
    int numbers[10];
    int sum = 0;
    float average;

    // Demander à l'utilisateur de saisir 10 nombres :
    printf("Entrez 10 nombres entiers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Nombre %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];
    }

    // Calculer la moyenne :
    average = sum / 10.0;

    // Afficher la moyenne :
    printf("La moyenne est: %.2f\n", average);

    // Calculer et afficher l'écart de chaque nombre par rapport à la moyenne :;
    printf("Les écarts par rapport à la moyenne sont:\n");
    for (int i = 0; i < 10; i++) {
        float ecart = numbers[i] - average;
        printf("Nombre %d: %.2f\n", numbers[i], ecart);
    }

    return 0;
}



