#include <stdio.h>
#include <math.h>

int main() {
    double angle_degrees = 45.0;
    double angle_radians = angle_degrees * M_PI / 180.0;

    // Calcul des fonctions trigonométriques
    double sine = sin(angle_radians);
    double cosine = cos(angle_radians);
    double tangent = tan(angle_radians);

    // Calcul des fonctions hyperboliques
    double sine_hyper = sinh(angle_radians);
    double cosine_hyper = cosh(angle_radians);
    double tangent_hyper = tanh(angle_radians);

    // Calcul des fonctions arcs
    double arcsine = asin(sine);
    double arccosine = acos(cosine);
    double arctangent = atan(tangent);

    // Affichage des résultats
    printf("Pour un angle de %.2f degrés (ou %.4f radians):\n", angle_degrees, angle_radians);
    printf("Sinus: %.6f\n", sine);
    printf("Cosinus: %.6f\n", cosine);
    printf("Tangente: %.6f\n", tangent);
    printf("Sinus hyperbolique: %.6f\n", sine_hyper);
    printf("Cosinus hyperbolique: %.6f\n", cosine_hyper);
    printf("Tangente hyperbolique: %.6f\n", tangent_hyper);
    printf("Arc sinus: %.6f\n", arcsine);
    printf("Arc cosinus: %.6f\n", arccosine);
    printf("Arc tangente: %.6f\n", arctangent);

    return 0;
}
