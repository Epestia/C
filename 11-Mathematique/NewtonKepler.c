#include <stdio.h>
#include <math.h>

#define G 6.67430e-11  // Constante gravitationnelle en m^3 kg^-1 s^-2
#define PI 3.141592653589793

void newtonLaws() {
    double mass, force, acceleration, mass2, distance, gravitational_force;

    // Première loi de Newton (Principe d'inertie)
    printf("Première loi de Newton: Un objet au repos reste au repos et un objet en mouvement reste en mouvement à moins qu'une force extérieure n'agisse sur lui.\n");

    // Deuxième loi de Newton (Principe fondamental de la dynamique)
    printf("\nEntrez la masse de l'objet (en kg): ");
    scanf("%lf", &mass);
    printf("Entrez la force agissant sur l'objet (en N): ");
    scanf("%lf", &force);
    acceleration = force / mass;
    printf("Deuxième loi de Newton: F = m * a -> Accélération = %.2lf m/s^2\n", acceleration);

    // Troisième loi de Newton (Principe d'action-réaction)
    printf("\nTroisième loi de Newton: Pour chaque action, il y a une réaction égale et opposée.\n");

    // Force de gravitation (extension de la troisième loi de Newton)
    printf("\nCalcul de la force gravitationnelle entre deux masses:\n");
    printf("Entrez la masse du premier objet (en kg): ");
    scanf("%lf", &mass);
    printf("Entrez la masse du deuxième objet (en kg): ");
    scanf("%lf", &mass2);
    printf("Entrez la distance entre les deux objets (en mètres): ");
    scanf("%lf", &distance);
    gravitational_force = (G * mass * mass2) / (distance * distance);
    printf("Force de gravitation: F = G * (m1 * m2) / d^2 -> Force gravitationnelle = %.2e N\n", gravitational_force);
}

void keplerLaws() {
    double a, T, M1, M2, orbital_period, P2, area_speed, r_peri, r_apo;

    // Première loi de Kepler (Loi des orbites)
    printf("\nPremière loi de Kepler: Les planètes décrivent des orbites elliptiques avec le Soleil en un des foyers.\n");

    // Deuxième loi de Kepler (Loi des aires)
    printf("Deuxième loi de Kepler: Le segment reliant une planète au Soleil balaie des aires égales en des temps égaux.\n");

    // Calcul de la vitesse aréolaire (aire balayée par unité de temps)
    printf("\nCalcul de la vitesse aréolaire:\n");
    printf("Entrez le demi-grand axe de l'orbite (en mètres): ");
    scanf("%lf", &a);
    printf("Entrez la distance au périhélie (en mètres): ");
    scanf("%lf", &r_peri);
    printf("Entrez la distance à l'aphélie (en mètres): ");
    scanf("%lf", &r_apo);
    area_speed = PI * a * sqrt(r_peri * r_apo);
    printf("Vitesse aréolaire: π * a * sqrt(r_peri * r_apo) -> Vitesse aréolaire = %.2e m^2/s\n", area_speed);

    // Troisième loi de Kepler (Loi des périodes)
    printf("\nCalcul de la période orbitale:\n");
    printf("Entrez la masse de l'objet en orbite (en kg): ");
    scanf("%lf", &M1);
    printf("Entrez la masse du corps central (en kg): ");
    scanf("%lf", &M2);
    orbital_period = 2 * PI * sqrt(pow(a, 3) / (G * (M1 + M2)));
    printf("Troisième loi de Kepler: T^2 = (4 * π^2 * a^3) / (G * (M1 + M2)) -> Période de révolution = %.2e secondes\n", orbital_period);
}

int main() {
    int choice;

    printf("Choisissez les lois à calculer et afficher:\n");
    printf("1. Lois de Newton\n");
    printf("2. Lois de Kepler\n");
    printf("Entrez votre choix (1 ou 2): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            newtonLaws();
            break;
        case 2:
            keplerLaws();
            break;
        default:
            printf("Choix invalide. Veuillez entrer 1 ou 2.\n");
    }

    return 0;
}
