#include <stdio.h>
#include <stdlib.h>

void printBinaryWithArray(int n) {
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

void printBinaryWithoutArray(int n) {
    if (n > 1)
        printBinaryWithoutArray(n / 2);
    printf("%d", n % 2);
}

void printHexadecimalWithArray(int num) {
    char hex[32];
    int i = 0;
    if (num == 0) {
        printf("0");
        return;
    }
    while (num != 0) {
        int temp = 0;
        temp = num % 16;
        if (temp < 10) {
            hex[i] = temp + 48;
        } else {
            hex[i] = temp + 55;
        }
        i++;
        num = num / 16;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%c", hex[j]);
}

void printHexadecimalWithoutArray(int num) {
    printf("%X", num);
}

unsigned int hexToDecimalWithArray(char hex[]) {
    unsigned int num;
    sscanf(hex, "%x", &num);
    return num;
}

unsigned int hexToDecimalWithoutArray(char hex[]) {
    unsigned int num = 0;
    for (int i = 0; hex[i] != '\0'; i++) {
        if (hex[i] >= '0' && hex[i] <= '9') {
            num = num * 16 + (hex[i] - '0');
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            num = num * 16 + (hex[i] - 'A' + 10);
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            num = num * 16 + (hex[i] - 'a' + 10);
        }
    }
    return num;
}

void mergeArrays(int *a, int n1, int *b, int n2) {
    // Réallocation de la mémoire pour accueillir les éléments de b
    a = (int *)realloc(a, (n1 + n2) * sizeof(int));
    
    // Ajout des éléments de b à la fin de a
    for (int i = 0; i < n2; i++) {
        a[n1 + i] = b[i];
    }

    printf("Les éléments de a après l'ajout de b:\n");
    for (int i = 0; i < n1 + n2; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");

    // Libération de la mémoire
    free(a);
    free(b);
}

int main() {
    int num;

    // 1. Lire un nombre entier positif et afficher son écriture binaire
    printf("Entrez un nombre entier positif: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("L'écriture binaire de %d (avec tableau) est: ", num);
        printBinaryWithArray(num);
        printf("\n");

        printf("L'écriture binaire de %d (sans tableau) est: ", num);
        printBinaryWithoutArray(num);
        printf("\n");
    } else {
        printf("Veuillez entrer un nombre entier positif.\n");
    }

    // 2. Lire un nombre entier positif et afficher son écriture hexadécimale
    printf("Entrez un nombre entier positif: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("L'écriture hexadécimale de %d (avec tableau) est: ", num);
        printHexadecimalWithArray(num);
        printf("\n");

        printf("L'écriture hexadécimale de %d (sans tableau) est: ", num);
        printHexadecimalWithoutArray(num);
        printf("\n");
    } else {
        printf("Veuillez entrer un nombre entier positif.\n");
    }

    // 3. Lire un nombre hexadécimal et afficher son écriture en base 10
    char hex[32];
    printf("Entrez un nombre hexadécimal: ");
    scanf("%s", hex);

    unsigned int decimalWithArray = hexToDecimalWithArray(hex);
    unsigned int decimalWithoutArray = hexToDecimalWithoutArray(hex);

    printf("L'écriture en base 10 de %s (avec tableau) est: %u\n", hex, decimalWithArray);
    printf("L'écriture en base 10 de %s (sans tableau) est: %u\n", hex, decimalWithoutArray);

    // 4. Lire deux tableaux d'entiers a et b et les fusionner
    int n1, n2;
    printf("Entrez le nombre d'éléments de a: ");
    scanf("%d", &n1);
    int *a = (int *)malloc(n1 * sizeof(int));

    printf("Entrez les éléments de a:\n");
    for (int i = 0; i < n1; i++) {
        scanf("%d", &a[i]);
    }

    printf("Entrez le nombre d'éléments de b: ");
    scanf("%d", &n2);
    int *b = (int *)malloc(n2 * sizeof(int));

    printf("Entrez les éléments de b:\n");
    for (int i = 0; i < n2; i++) {
        scanf("%d", &b[i]);
    }

    mergeArrays(a, n1, b, n2);

    return 0;
}
