#include <stdio.h>
#include <string.h>

#define MAX_PRODUITS 100

// Structure pour représenter un produit
typedef struct {
    int code;
    char nom[50];
    float prix;
} Produit;

// Déclaration du tableau de produits et du nombre de produits actuels
Produit catalogue[MAX_PRODUITS];
int nombreProduits = 0;

// Fonction pour ajouter un produit au catalogue
void ajouterProduit(int code, const char nom[], float prix) {
    // Vérifier si le catalogue n'est pas plein
    if (nombreProduits < MAX_PRODUITS) {
        catalogue[nombreProduits].code = code;
        strcpy(catalogue[nombreProduits].nom, nom);
        catalogue[nombreProduits].prix = prix;
        nombreProduits++;
        printf("Produit ajoute au catalogue.\n");
    } else {
        printf("Le catalogue est plein. Impossible d'ajouter un nouveau produit.\n");
    }
}

// Fonction pour supprimer un produit du catalogue par son code
void supprimerProduit(int code) {
    int i, trouve = 0;

    // Parcourir le catalogue pour trouver le produit avec le code spécifié
    for (i = 0; i < nombreProduits; i++) {
        if (catalogue[i].code == code) {
            // Décaler les produits suivants vers la gauche pour remplir le trou
            for (int j = i; j < nombreProduits - 1; j++) {
                catalogue[j] = catalogue[j + 1];
            }
            nombreProduits--;
            trouve = 1;
            printf("Produit supprime du catalogue.\n");
            break;
        }
    }

    if (!trouve) {
        printf("Produit non trouve dans le catalogue.\n");
    }
}

// Fonction pour rechercher un produit par son code
void rechercherProduit(int code) {
    int i, trouve = 0;

    // Parcourir le catalogue pour trouver le produit avec le code spécifié
    for (i = 0; i < nombreProduits; i++) {
        if (catalogue[i].code == code) {
            printf("Code : %d\n", catalogue[i].code);
            printf("Nom : %s\n", catalogue[i].nom);
            printf("Prix : %.2f\n", catalogue[i].prix);
            trouve = 1;
            break;
        }
    }

    if (!trouve) {
        printf("Produit non trouve dans le catalogue.\n");
    }
}

// Fonction pour afficher tous les produits du catalogue
void afficherCatalogue() {
    if (nombreProduits == 0) {
        printf("Le catalogue est vide.\n");
    } else {
        printf("Catalogue des produits :\n");
        for (int i = 0; i < nombreProduits; i++) {
            printf("Produit %d :\n", i + 1);
            printf("Code : %d\n", catalogue[i].code);
            printf("Nom : %s\n", catalogue[i].nom);
            printf("Prix : %.2f\n", catalogue[i].prix);
            printf("-----------------\n");
        }
    }
}

int main() {
    int choix;
    int code;
    char nom[50];
    float prix;

    // Menu interactif pour gérer le catalogue de produits
    do {
        printf("\nMenu :\n");
        printf("1. Ajouter un produit\n");
        printf("2. Supprimer un produit\n");
        printf("3. Rechercher un produit par code\n");
        printf("4. Afficher le catalogue des produits\n");
        printf("5. Quitter\n");
        printf("Faites votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                printf("Entrez le code du produit : ");
                scanf("%d", &code);
                printf("Entrez le nom du produit : ");
                scanf("%s", nom); // Utilisation de %s pour lire une chaîne de caractères sans espaces
                printf("Entrez le prix du produit : ");
                scanf("%f", &prix);
                ajouterProduit(code, nom, prix);
                break;
            case 2:
                printf("Entrez le code du produit a supprimer : ");
                scanf("%d", &code);
                supprimerProduit(code);
                break;
            case 3:
                printf("Entrez le code du produit a rechercher : ");
                scanf("%d", &code);
                rechercherProduit(code);
                break;
            case 4:
                afficherCatalogue();
                break;
            case 5:
                printf("Programme termine.\n");
                break;
            default:
                printf("Choix invalide. Veuillez choisir une option valide.\n");
        }
    } while (choix != 5);

    return 0;
}

/*
Guide Naturel de Structuration (GNS) :

1. Définir une structure Produit avec les champs code, nom et prix.
2. Déclarer un tableau de produits pour stocker les produits du catalogue.
3. Déclarer une variable pour le nombre de produits actuellement dans le catalogue.
4. Définir des fonctions pour chaque fonctionnalité :
5.     Fonction ajouterProduit(code, nom, prix) :
6.         Ajouter un nouveau produit au tableau.
7.         Incrémenter le nombre de produits.
8.     Fonction supprimerProduit(code) :
9.         Rechercher le produit par son code et le supprimer du tableau.
10.        Décrémenter le nombre de produits.
11.    Fonction rechercherProduit(code) :
12.        Rechercher et afficher les informations du produit par son code.
13.    Fonction afficherCatalogue() :
14.        Afficher tous les produits du catalogue avec leurs informations.
15.    Fonction principale main() :
16.        Initialiser le tableau de produits et le nombre de produits.
17.        Proposer un menu interactif avec des options pour ajouter, supprimer, rechercher et afficher des produits.
18.        Lire et traiter les choix de l'utilisateur jusqu'à ce qu'il décide de quitter.
19. Fin de la fonction principale.
*/
