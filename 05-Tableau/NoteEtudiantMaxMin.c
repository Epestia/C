#include <stdio.h>

#define N 5  // Nombre d'étudiants
#define M 3  // Nombre de matières

void trier(float arr[], int taille) {
    for (int i = 0; i < taille - 1; i++) {
        for (int j = 0; j < taille - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

float calculer_median(float arr[], int taille) {
    trier(arr, taille);
    if (taille % 2 == 0) {
        return (arr[taille / 2 - 1] + arr[taille / 2]) / 2;
    } else {
        return arr[taille / 2];
    }
}

int main() {
    // Initialisation des notes des étudiants
    float notes[N][M] = {
        {12, 15, 14},
        {10, 11, 13},
        {14, 13, 15},
        {8, 9, 10},
        {16, 17, 18}
    };

    // Recherche des notes maximales, minimales, moyennes et médianes par matière
    printf("Notes maximales, minimales, moyennes et médianes par matière :\n");
    for (int j = 0; j < M; j++) {
        float max = notes[0][j];
        float min = notes[0][j];
        float somme = 0;
        float matiere[N];
        for (int i = 0; i < N; i++) {
            if (notes[i][j] > max) {
                max = notes[i][j];
            }
            if (notes[i][j] < min) {
                min = notes[i][j];
            }
            somme += notes[i][j];
            matiere[i] = notes[i][j];
        }
        float moyenne = somme / N;
        float mediane = calculer_median(matiere, N);
        printf("Matière %d : Max = %.2f, Min = %.2f, Moyenne = %.2f, Médiane = %.2f\n", j + 1, max, min, moyenne, mediane);
    }

    // Recherche des notes maximales, minimales, moyennes et médianes par étudiant
    printf("\nNotes maximales, minimales, moyennes et médianes par étudiant :\n");
    for (int i = 0; i < N; i++) {
        float max = notes[i][0];
        float min = notes[i][0];
        float somme = 0;
        float etudiant[M];
        for (int j = 0; j < M; j++) {
            if (notes[i][j] > max) {
                max = notes[i][j];
            }
            if (notes[i][j] < min) {
                min = notes[i][j];
            }
            somme += notes[i][j];
            etudiant[j] = notes[i][j];
        }
        float moyenne = somme / M;
        float mediane = calculer_median(etudiant, M);
        printf("Étudiant %d : Max = %.2f, Min = %.2f, Moyenne = %.2f, Médiane = %.2f\n", i + 1, max, min, moyenne, mediane);
    }

    return 0;
}
