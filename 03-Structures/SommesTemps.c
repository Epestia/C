#include <stdio.h>

int main() {
    // Déclaration des variables
    int h1, m1, s1, h2, m2, s2;
    int h_total, m_total, s_total;
    int minutes_additionnelles, heures_additionnelles;

    // Demande de saisie des deux temps
    printf("Entrez le premier temps (heures minutes secondes) : ");
    scanf("%d %d %d", &h1, &m1, &s1);
    printf("Entrez le deuxieme temps (heures minutes secondes) : ");
    scanf("%d %d %d", &h2, &m2, &s2);

    // Calcul de la somme des temps
    s_total = s1 + s2;
    minutes_additionnelles = s_total / 60;
    s_total = s_total % 60;

    m_total = m1 + m2 + minutes_additionnelles;
    heures_additionnelles = m_total / 60;
    m_total = m_total % 60;

    h_total = h1 + h2 + heures_additionnelles;

    // Affichage du temps total
    printf("Le temps total est : %d heures, %d minutes et %d secondes\n", h_total, m_total, s_total);

    return 0;
}
