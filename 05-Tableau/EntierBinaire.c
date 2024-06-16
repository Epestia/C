#include <stdio.h>

void printBinary(int n) {
    int binary[32];
    int i = 0;
    if (n == 0) {
        printf("0");
        return;
    }
    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}

int main() {
    int num;
    printf("Entrez un nombre entier positif: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("L'écriture binaire de %d est: ", num);
        printBinary(num);
        printf("\n");
    } else {
        printf("Veuillez entrer un nombre entier positif.\n");
    }

    return 0;
}
