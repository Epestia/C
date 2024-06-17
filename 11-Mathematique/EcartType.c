#include <stdio.h>
#include <math.h>

// Fonction pour calculer la moyenne d'un tableau
double calculer_moyenne(int a[], int n) {
    double somme = 0.0;
    for (int i = 0; i < n; i++) {
        somme += a[i];
    }
    return somme / n;
}

// Fonction pour calculer l'écart type d'un tableau
double calculer_ecart_type(int a[], int n) {
    double moyenne = calculer_moyenne(a, n);
    double somme_diff_carres = 0.0;

    for (int i = 0; i < n; i++) {
        somme_diff_carres += pow(a[i] - moyenne, 2);
    }

    return sqrt(somme_diff_carres / n);
}

int main() {
    int n;

    // Lire la taille du tableau
    printf("Entrez la taille du tableau : ");
    scanf("%d", &n);

    int a[n];

    // Lire les éléments du tableau
    printf("Entrez les éléments du tableau : ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Calculer et afficher l'écart type
    double ecart_type = calculer_ecart_type(a, n);
    printf("L'écart type du tableau est : %.2f\n", ecart_type);

    return 0;
}
