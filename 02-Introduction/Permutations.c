#include <stdio.h>

int main() {
    int a, b, temp;

    // Lire les deux nombres entiers
    printf("Entrez nombre1 : ");
    scanf("%d", &a);
    printf("Entrez nombre2 : ");
    scanf("%d", &b);

    // Permuter les contenus des variables
    temp = a;
    a = b;
    b = temp;

    // Afficher les contenus permutés
    printf("Après permutation, nombre1 est : %d\n", a);
    printf("Après permutation, nombre2 est : %d\n", b);

    return 0;
     char str1[100], str2[100], temp[100];

    // Lire les deux chaînes de caractères
    printf("Entrez la première chaîne : ");
    scanf("%s", str1);
    printf("Entrez la deuxième chaîne : ");
    scanf("%s", str2);

    // Permuter les contenus des variables
    strcpy(temp, str1);
    strcpy(str1, str2);
    strcpy(str2, temp);

    // Afficher les contenus permutés
    printf("Après permutation, la première chaîne est : %s\n", str1);
    printf("Après permutation, la deuxième chaîne est : %s\n", str2);

    return 0;
}
