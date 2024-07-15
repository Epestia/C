#include <stdio.h>
#include <string.h>

#define MAX_CURRENCY_LENGTH 4
#define NUM_CURRENCIES 10

// Structure pour stocker les informations de change
typedef struct {
    char currency[MAX_CURRENCY_LENGTH];
    double rate_to_usd;
} Currency;

// Tableau de devises et leurs taux de change par rapport à USD
Currency currencies[NUM_CURRENCIES] = {
    {"USD", 1.0},
    {"EUR", 0.85},
    {"JPY", 110.0},
    {"GBP", 0.75},
    {"AUD", 1.35},
    {"CAD", 1.25},
    {"CHF", 0.92},
    {"CNY", 6.47},
    {"SEK", 8.60},
    {"NZD", 1.42}
};

// Fonction pour obtenir le taux de change USD vers une autre devise
double get_rate_to_usd(char currency[]) {
    for (int i = 0; i < NUM_CURRENCIES; i++) {
        if (strcmp(currencies[i].currency, currency) == 0) {
            return currencies[i].rate_to_usd;
        }
    }
    return -1.0; // Devise non trouvée
}

// Fonction pour convertir une devise en une autre
double convert_currency(double amount, char from_currency[], char to_currency[]) {
    double from_rate = get_rate_to_usd(from_currency);
    double to_rate = get_rate_to_usd(to_currency);
    
    if (from_rate < 0 || to_rate < 0) {
        printf("Devise non reconnue.\n");
        return -1.0;
    }

    return amount * (to_rate / from_rate);
}

int main() {
    char from_currency[MAX_CURRENCY_LENGTH];
    char to_currency[MAX_CURRENCY_LENGTH];
    double amount;
    double converted_amount;

    // Entrée utilisateur
    printf("Entrez le montant à convertir: ");
    scanf("%lf", &amount);
    printf("Entrez la devise d'origine (USD, EUR, JPY, GBP, AUD, CAD, CHF, CNY, SEK, NZD): ");
    scanf("%s", from_currency);
    printf("Entrez la devise cible (USD, EUR, JPY, GBP, AUD, CAD, CHF, CNY, SEK, NZD): ");
    scanf("%s", to_currency);

    // Conversion
    converted_amount = convert_currency(amount, from_currency, to_currency);

    // Afficher le résultat
    if (converted_amount >= 0) {
        printf("%.2lf %s est égal à %.2lf %s\n", amount, from_currency, converted_amount, to_currency);
    }

    return 0;
}
