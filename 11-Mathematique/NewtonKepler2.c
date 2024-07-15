#include <stdio.h>
#include <math.h>

#define G 6.67430e-11  // Constante gravitationnelle en m^3 kg^-1 s^-2
#define PI 3.141592653589793

// Prototypes de fonctions
void displayMenu();
void newtonLaws();
void keplerLaws();
void calculateForceGravity();
void calculateOrbitalPeriod();
void calculateAreaSpeed();
void clearInputBuffer();

int main() {
    int choice;

    while (1) {
        displayMenu();
        scanf("%d", &choice);
        clearInputBuffer(); // Nettoyer le buffer d'entrée

        switch (choice) {
            case 1:
                newtonLaws();
                break;
            case 2:
                keplerLaws();
                break;
            case 3:
                printf("Au revoir!\n");
                return 0;
            default:
                printf("Choix invalide. Veuillez entrer 1, 2 ou 3.\n");
        }
    }
    return 0;
}

// Afficher le menu principal
void displayMenu() {
    printf("\nChoisissez les lois à calculer et afficher:\n");
    printf("1. Lois de Newton\n");
    printf("2. Lois de Kepler\n");
    printf("3. Quitter\n");
    printf("Entrez votre choix (1, 2 ou 3): ");
}

// Nettoyer le buffer d'entrée
void clearInputBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

// Calculer et afficher les lois de Newton
void newtonLaws() {
    double mass, force, acceleration;

    // Première loi de Newton (Principe d'inertie)
    printf("\nPremière loi de Newton:\n");
    printf("Un objet au repos reste au repos et un objet en mouvement reste en mouvement à moins qu'une force extérieure n'agisse sur lui.\n");

    // Deuxième loi de Newton (Principe fondamental de la dynamique)
    printf("\nDeuxième loi de Newton:\n");
    printf("Entrez la masse de l'objet (en kg): ");
    scanf("%lf", &mass);
    printf("Entrez la force agissant sur l'objet (en N): ");
    scanf("%lf", &force);
    clearInputBuffer(); // Nettoyer le buffer d'entrée
    acceleration = force / mass;
    printf("F = m * a -> Accélération = %.2lf m/s^2\n", acceleration);

    // Troisième loi de Newton (Principe d'action-réaction)
    printf("\nTroisième loi de Newton:\n");
    printf("Pour chaque action, il y a une réaction égale et opposée.\n");

    // Calculer la force de gravitation
    calculateForceGravity();
}

// Calculer et afficher la force de gravitation entre deux masses (corps)
void calculateForceGravity() {
    double mass1, mass2, distance, gravitational_force;

    printf("\nCalcul de la force gravitationnelle entre deux masses:\n");
    printf("Entrez la masse du premier objet (en kg): ");
    scanf("%lf", &mass1);
    printf("Entrez la masse du deuxième objet (en kg): ");
    scanf("%lf", &mass2);
    printf("Entrez la distance entre les deux objets (en mètres): ");
    scanf("%lf", &distance);
    clearInputBuffer(); // Nettoyer le buffer d'entrée
    gravitational_force = (G * mass1 * mass2) / (distance * distance);
    printf("F = G * (m1 * m2) / d^2 -> Force gravitationnelle = %.2e N\n", gravitational_force);
}

// Calculer et afficher les lois de Kepler
void keplerLaws() {
    double a, T, M1, M2;

    // Première loi de Kepler (Loi des orbites)
    printf("\nPremière loi de Kepler:\n");
    printf("Les planètes décrivent des orbites elliptiques avec le Soleil en un des foyers.\n");

    // Deuxième loi de Kepler (Loi des aires)
    printf("\nDeuxième loi de Kepler:\n");
    printf("Le segment reliant une planète au Soleil balaie des aires égales en des temps égaux.\n");

    // Calculer la vitesse aréolaire
    calculateAreaSpeed();

    // Troisième loi de Kepler (Loi des périodes)
    printf("\nCalcul de la période orbitale:\n");
    printf("Entrez le demi-grand axe de l'orbite (en mètres): ");
    scanf("%lf", &a);
    printf("Entrez la masse de l'objet en orbite (en kg): ");
    scanf("%lf", &M1);
    printf("Entrez la masse du corps central (en kg): ");
    scanf("%lf", &M2);
    clearInputBuffer(); // Nettoyer le buffer d'entrée
    T = 2 * PI * sqrt(pow(a, 3) / (G * (M1 + M2)));
    printf("T^2 = (4 * π^2 * a^3) / (G * (M1 + M2)) -> Période de révolution = %.2e secondes\n", T);
}

// Calculer et afficher la vitesse aréolaire (aire balayée par unité de temps)
void calculateAreaSpeed() {
    double a, r_peri, r_apo, area_speed;

    printf("\nCalcul de la vitesse aréolaire:\n");
    printf("Entrez le demi-grand axe de l'orbite (en mètres): ");
    scanf("%lf", &a);
    printf("Entrez la distance au périhélie (en mètres): ");
    scanf("%lf", &r_peri);
    printf("Entrez la distance à l'aphélie (en mètres): ");
    scanf("%lf", &r_apo);
    clearInputBuffer(); // Nettoyer le buffer d'entrée
    area_speed = PI * a * sqrt(r_peri * r_apo);
    printf("π * a * sqrt(r_peri * r_apo) -> Vitesse aréolaire = %.2e m^2/s\n", area_speed);
}

// Ajouter des fonctions supplémentaires pour compléter le code

// Afficher des informations sur les lois de Newton
void infoNewtonLaws() {
    printf("\nLes trois lois de Newton:\n");
    printf("1. Première loi: Principe d'inertie.\n");
    printf("2. Deuxième loi: Principe fondamental de la dynamique (F = m * a).\n");
    printf("3. Troisième loi: Principe d'action-réaction.\n");
}

// Afficher des informations sur les lois de Kepler
void infoKeplerLaws() {
    printf("\nLes trois lois de Kepler:\n");
    printf("1. Première loi: Les orbites sont elliptiques.\n");
    printf("2. Deuxième loi: Loi des aires égales.\n");
    printf("3. Troisième loi: Loi des périodes (T^2 proportionnel à a^3).\n");
}

// Fonction principale pour afficher les informations et les calculs
void mainMenu() {
    int choice;

    while (1) {
        printf("\nMenu principal:\n");
        printf("1. Lois de Newton\n");
        printf("2. Lois de Kepler\n");
        printf("3. Informations sur les lois de Newton\n");
        printf("4. Informations sur les lois de Kepler\n");
        printf("5. Quitter\n");
        printf("Entrez votre choix: ");
        scanf("%d", &choice);
        clearInputBuffer(); // Nettoyer le buffer d'entrée

        switch (choice) {
            case 1:
                newtonLaws();
                break;
            case 2:
                keplerLaws();
                break;
            case 3:
                infoNewtonLaws();
                break;
            case 4:
                infoKeplerLaws();
                break;
            case 5:
                printf("Au revoir!\n");
                return;
            default:
                printf("Choix invalide. Veuillez entrer un numéro valide.\n");
        }
    }
}
