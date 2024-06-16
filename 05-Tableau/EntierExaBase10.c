#include <stdio.h>

int main() {
    char hex[32];
    printf("Entrez un nombre hexadécimal: ");
    scanf("%s", hex);

    unsigned int num;
    sscanf(hex, "%x", &num);

    printf("L'écriture en base 10 de %s est: %u\n", hex, num);

    return 0;
}
