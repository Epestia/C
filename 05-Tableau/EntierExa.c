#include <stdio.h>

void printHexadecimal(int num) {
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

int main() {
    int num;
    printf("Entrez un nombre entier positif: ");
    scanf("%d", &num);

    if (num >= 0) {
        printf("L'écriture hexadécimale de %d est: ", num);
        printHexadecimal(num);
        printf("\n");
    } else {
        printf("Veuillez entrer un nombre entier positif.\n");
    }

    return 0;
}


