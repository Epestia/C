#include <stdio.h>

// Fonction pour vérifier si une année est bissextile :
int estBissextile(int annee) {
    // Vérifie si l'année est divisible par 4
    if (annee % 4 == 0) {
        // Vérifie si l'année est divisible par 100
        if (annee % 100 == 0) {
            // Vérifie si l'année est également divisible par 400
            if (annee % 400 == 0) {
                return 1; // L'année est bissextile
            } else {
                return 0; // L'année n'est pas bissextile
            }
        } else {
            return 1; // L'année est bissextile
        }
    } else {
        return 0; // L'année n'est pas bissextile
    }
}

int main() {
    int annee;
    
    // Demande à l'utilisateur d'entrer une année
    printf("Entrez une année : ");
    scanf("%d", &annee);
    
    // Utilise la fonction estBissextile pour vérifier si l'année est bissextile
    if (estBissextile(annee)) {
        // Si la fonction retourne 1, l'année est bissextile
        printf("%d est une année bissextile.\n", annee);
    } else {
        // Si la fonction retourne 0, l'année n'est pas bissextile
        printf("%d n'est pas une année bissextile.\n", annee);
    }
    
    return 0;
}
