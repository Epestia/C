#include <stdio.h>

#define N 5  // Nombre d'étudiants
#define M 3  // Nombre de matières

//Methode main :

int main() {
    // Initialisation des notes des étudiants :
    float notes[N][M] = {
        {12, 15, 14},
        {10, 11, 13},
        {14, 13, 15},
        {8, 9, 10},
        {16, 17, 18}
    };

    // Calcul des moyennes des étudiants :
    printf("Moyennes des étudiants :\n");
    for (int i = 0; i < N; i++) {
        float somme = 0;
        for (int j = 0; j < M; j++) {
            somme += notes[i][j];
        }
        float moyenne = somme / M;
        printf("Étudiant %d : %.2f\n", i + 1, moyenne);
    }

    // Calcul des moyennes des matières :
    printf("\nMoyennes des matières :\n");
    for (int j = 0; j < M; j++) {
        float somme = 0;
        for (int i = 0; i < N; i++) {
            somme += notes[i][j];
        }
        float moyenne = somme / N;
        printf("Matière %d : %.2f\n", j + 1, moyenne);
    }

    return 0;
}
