#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Définition des constantes
#define MAX_LIVRES 100
#define MAX_MEMBRES 50
#define MAX_TITRE 100
#define MAX_AUTEUR 50
#define MAX_NOM 50

// Structure pour représenter un livre
typedef struct {
    int id;
    char titre[MAX_TITRE];
    char auteur[MAX_AUTEUR];
    int disponible; // 1 si disponible, 0 si emprunté
} Livre;

// Structure pour représenter un membre
typedef struct {
    int id;
    char nom[MAX_NOM];
    int livre_emprunte; // -1 si aucun livre emprunté
} Membre;

// Déclarations des fonctions
void ajouter_livre(Livre livres[], int *nb_livres);
void afficher_livres(Livre livres[], int nb_livres);
void rechercher_livre(Livre livres[], int nb_livres, char *titre);
void emprunter_livre(Livre livres[], int nb_livres, Membre membres[], int nb_membres, int id_livre, int id_membre);
void retourner_livre(Livre livres[], int nb_livres, Membre membres[], int nb_membres, int id_livre, int id_membre);
void ajouter_membre(Membre membres[], int *nb_membres);
void afficher_membres(Membre membres[], int nb_membres);
void menu();

int main() {
    Livre livres[MAX_LIVRES];
    Membre membres[MAX_MEMBRES];
    int nb_livres = 0;
    int nb_membres = 0;

    int choix;
    char titre[MAX_TITRE];
    int id_livre, id_membre;

    while (1) {
        menu();
        printf("Entrez votre choix: ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                ajouter_livre(livres, &nb_livres);
                break;
            case 2:
                afficher_livres(livres, nb_livres);
                break;
            case 3:
                printf("Entrez le titre du livre: ");
                scanf(" %[^\n]", titre);
                rechercher_livre(livres, nb_livres, titre);
                break;
            case 4:
                printf("Entrez l'ID du livre à emprunter: ");
                scanf("%d", &id_livre);
                printf("Entrez l'ID du membre: ");
                scanf("%d", &id_membre);
                emprunter_livre(livres, nb_livres, membres, nb_membres, id_livre, id_membre);
                break;
            case 5:
                printf("Entrez l'ID du livre à retourner: ");
                scanf("%d", &id_livre);
                printf("Entrez l'ID du membre: ");
                scanf("%d", &id_membre);
                retourner_livre(livres, nb_livres, membres, nb_membres, id_livre, id_membre);
                break;
            case 6:
                ajouter_membre(membres, &nb_membres);
                break;
            case 7:
                afficher_membres(membres, nb_membres);
                break;
            case 8:
                printf("Au revoir!\n");
                exit(0);
            default:
                printf("Choix invalide, veuillez réessayer.\n");
        }
    }

    return 0;
}

void ajouter_livre(Livre livres[], int *nb_livres) {
    if (*nb_livres >= MAX_LIVRES) {
        printf("La bibliothèque est pleine, impossible d'ajouter plus de livres.\n");
        return;
    }

    Livre nouveau_livre;
    nouveau_livre.id = *nb_livres + 1;
    printf("Entrez le titre du livre: ");
    scanf(" %[^\n]", nouveau_livre.titre);
    printf("Entrez l'auteur du livre: ");
    scanf(" %[^\n]", nouveau_livre.auteur);
    nouveau_livre.disponible = 1;

    livres[*nb_livres] = nouveau_livre;
    (*nb_livres)++;

    printf("Livre ajouté avec succès.\n");
}

void afficher_livres(Livre livres[], int nb_livres) {
    if (nb_livres == 0) {
        printf("Aucun livre dans la bibliothèque.\n");
        return;
    }

    printf("Liste des livres:\n");
    for (int i = 0; i < nb_livres; i++) {
        printf("ID: %d, Titre: %s, Auteur: %s, Disponible: %s\n", 
            livres[i].id, 
            livres[i].titre, 
            livres[i].auteur, 
            livres[i].disponible ? "Oui" : "Non");
    }
}

void rechercher_livre(Livre livres[], int nb_livres, char *titre) {
    int trouve = 0;
    for (int i = 0; i < nb_livres; i++) {
        if (strstr(livres[i].titre, titre) != NULL) {
            printf("ID: %d, Titre: %s, Auteur: %s, Disponible: %s\n", 
                livres[i].id, 
                livres[i].titre, 
                livres[i].auteur, 
                livres[i].disponible ? "Oui" : "Non");
            trouve = 1;
        }
    }

    if (!trouve) {
        printf("Aucun livre trouvé avec ce titre.\n");
    }
}

void emprunter_livre(Livre livres[], int nb_livres, Membre membres[], int nb_membres, int id_livre, int id_membre) {
    if (id_livre <= 0 || id_livre > nb_livres || livres[id_livre - 1].disponible == 0) {
        printf("Livre non disponible pour emprunt.\n");
        return;
    }

    if (id_membre <= 0 || id_membre > nb_membres || membres[id_membre - 1].livre_emprunte != -1) {
        printf("Membre non valide ou membre a déjà emprunté un livre.\n");
        return;
    }

    livres[id_livre - 1].disponible = 0;
    membres[id_membre - 1].livre_emprunte = id_livre;

    printf("Livre emprunté avec succès.\n");
}

void retourner_livre(Livre livres[], int nb_livres, Membre membres[], int nb_membres, int id_livre, int id_membre) {
    if (id_livre <= 0 || id_livre > nb_livres || livres[id_livre - 1].disponible == 1) {
        printf("Livre non valide pour retour.\n");
        return;
    }

    if (id_membre <= 0 || id_membre > nb_membres || membres[id_membre - 1].livre_emprunte != id_livre) {
        printf("Membre non valide ou le membre n'a pas emprunté ce livre.\n");
        return;
    }

    livres[id_livre - 1].disponible = 1;
    membres[id_membre - 1].livre_emprunte = -1;

    printf("Livre retourné avec succès.\n");
}

void ajouter_membre(Membre membres[], int *nb_membres) {
    if (*nb_membres >= MAX_MEMBRES) {
        printf("La bibliothèque a atteint le nombre maximum de membres.\n");
        return;
    }

    Membre nouveau_membre;
    nouveau_membre.id = *nb_membres + 1;
    printf("Entrez le nom du membre: ");
    scanf(" %[^\n]", nouveau_membre.nom);
    nouveau_membre.livre_emprunte = -1;

    membres[*nb_membres] = nouveau_membre;
    (*nb_membres)++;

    printf("Membre ajouté avec succès.\n");
}

void afficher_membres(Membre membres[], int nb_membres) {
    if (nb_membres == 0) {
        printf("Aucun membre dans la bibliothèque.\n");
        return;
    }

    printf("Liste des membres:\n");
    for (int i = 0; i < nb_membres; i++) {
        printf("ID: %d, Nom: %s, Livre emprunté: %d\n", 
            membres[i].id, 
            membres[i].nom, 
            membres[i].livre_emprunte);
    }
}

void menu() {
    printf("\nSystème de gestion de bibliothèque\n");
    printf("1. Ajouter un livre\n");
    printf("2. Afficher les livres\n");
    printf("3. Rechercher un livre\n");
    printf("4. Emprunter un livre\n");
    printf("5. Retourner un livre\n");
    printf("6. Ajouter un membre\n");
    printf("7. Afficher les membres\n");
    printf("8. Quitter");
    }


