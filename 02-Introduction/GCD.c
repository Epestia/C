#include <stdio.h>

// Fonction pour calculer le plus grand diviseur commun (GCD) de deux nombres
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Fonction pour calculer le plus petit commun multiple (LCM) de deux nombres :
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int num1, num2;

    // Demande à l'utilisateur d'entrer deux nombres
    printf("Entrez le premier nombre : ");
    scanf("%d", &num1);
    printf("Entrez le deuxième nombre : ");
    scanf("%d", &num2);

    // Calcule le GCD et le LCM des deux nombres
    int gcd_result = gcd(num1, num2);
    int lcm_result = lcm(num1, num2);

    // Affiche les résultats
    printf("Le plus grand diviseur commun (GCD) de %d et %d est : %d\n", num1, num2, gcd_result);
    printf("Le plus petit commun multiple (LCM) de %d et %d est : %d\n", num1, num2, lcm_result);

    return 0;
}

/*
Générateur de Nombre Semi-premier (GNS) en commentaire :

Un nombre semi-premier est un nombre naturel qui est le produit de deux nombres premiers (pas nécessairement distincts).
Voici un exemple de génération de nombres semi-premiers en pseudocode :

Pour n = 1 à N faire
    Pour m = n à N faire
        semi_premier = n * m
        imprimer(semi_premier)
    Fin Pour
Fin Pour

En C, cela pourrait être implémenté de la manière suivante :

#include <stdio.h>

// Fonction pour vérifier si un nombre est premier
int est_premier(int num) {
    if (num <= 1) return 0;
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0;
    }
    return 1;
}

// Générer et afficher des nombres semi-premiers jusqu'à une limite donnée
void generer_nombres_semi_premiers(int limite) {
    for (int i = 2; i <= limite; i++) {
        if (est_premier(i)) {
            for (int j = i; j <= limite; j++) {
                if (est_premier(j)) {
                    printf("%d ", i * j);
                }
            }
        }
    }
    printf("\n");
}

int main() {
    int limite;
    printf("Entrez la limite supérieure pour les nombres semi-premiers : ");
    scanf("%d", &limite);

    generer_nombres_semi_premiers(limite);

    return 0;
}
*/
