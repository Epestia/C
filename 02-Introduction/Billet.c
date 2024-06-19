#include <stdio.h>
#include <stdlib.h>

// Fonction pour afficher la liste des billets:
void afficherListe(int billets[], int taille) {
    for(int i = 0; i < taille; i++) {
        printf("%d ", billets[i]);
    }
    printf("\n");
}

// Fonction pour ajouter un billet:
void ajouterBillet(int **billets, int *taille, int billet) {
    *billets = realloc(*billets, (*taille + 1) * sizeof(int));
    (*billets)[*taille] = billet;
    (*taille)++;
}

// Fonction pour retirer un billet:
void retirerBillet(int billets[], int *taille, int billet) {
    int index = -1;
    for(int i = 0; i < *taille; i++) {
        if(billets[i] == billet) {
            index = i;
            break;
        }
    }
    if(index != -1) {
        for(int i = index; i < *taille - 1; i++) {
            billets[i] = billets[i + 1];
        }
        (*taille)--;
    }
}

// Fonction pour trier la liste:
void trierListe(int billets[], int taille) {
    for(int i = 0; i < taille - 1; i++) {
        for(int j = i + 1; j < taille; j++) {
            if(billets[i] > billets[j]) {
                int temp = billets[i];
                billets[i] = billets[j];
                billets[j] = temp;
            }
        }
    }
}

// Fonction pour inverser la liste:
void inverserListe(int billets[], int taille) {
    for(int i = 0; i < taille / 2; i++) {
        int temp = billets[i];
        billets[i] = billets[taille - 1 - i];
        billets[taille - 1 - i] = temp;
    }
}

// Fonction pour compter les occurrences d'un billet:
int compterOccurrences(int billets[], int taille, int billet) {
    int count = 0;
    for(int i = 0; i < taille; i++) {
        if(billets[i] == billet) {
            count++;
        }
    }
    return count;
}

// Fonction pour trouver l'index d'un billet:
int trouverIndex(int billets[], int taille, int billet) {
    for(int i = 0; i < taille; i++) {
        if(billets[i] == billet) {
            return i;
        }
    }
    return -1; // Retourne -1 si le billet n'est pas trouvé:
}

//Fonction main :
int main() {
    int taille = 7;
    int billets[] = {5, 10, 20, 50, 100, 200, 500};

    printf("Liste initiale: ");
    afficherListe(billets, taille);

    // Ajouter un billet de 2 euros:
    ajouterBillet(&billets, &taille, 2);
    printf("Après ajout de 2 euros: ");
    afficherListe(billets, taille);

    // Retirer le billet de 500 euros:
    retirerBillet(billets, &taille, 500);
    printf("Après retrait de 500 euros: ");
    afficherListe(billets, taille);

    // Trier la liste:
    trierListe(billets, taille);
    printf("Après tri: ");
    afficherListe(billets, taille);

    // Inverser la liste:
    inverserListe(billets, taille);
    printf("Après inversion: ");
    afficherListe(billets, taille);

    // Compter les occurrences d'un billet de 10 euros:
    int occurrences = compterOccurrences(billets, taille, 10);
    printf("Nombre de billets de 10 euros: %d\n", occurrences);

    // Trouver l'index du billet de 50 euros:
    int index = trouverIndex(billets, taille, 50);
    printf("Index du billet de 50 euros: %d\n", index);

    // Accéder au troisième billet:
    if (taille >= 3) {
        printf("Troisième billet: %d\n", billets[2]);
    } else {
        printf("Il n'y a pas de troisième billet.\n");
    }

    // Libérer la mémoire si nécessaire:
    free(billets);

    return 0;
}
