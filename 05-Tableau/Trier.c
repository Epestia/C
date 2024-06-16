#include <stdio.h>

void sort(int arr[], int n) {
    int i, j, temp;
    for (i = 0; i < n - 1; i++) {
        for (j = i + 1; j < n; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int n = 20;
    int a[n];
    int i;

    // Lire les 20 nombres
    printf("Entrez 20 nombres : ");
    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    // Trier le tableau
    sort(a, n);

    // Afficher le tableau trié
    printf("Le tableau trié : ");
    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    return 0;
}
