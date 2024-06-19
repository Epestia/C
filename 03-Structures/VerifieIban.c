#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Fonction pour convertir une lettre en son équivalent numérique
int letter_to_number(char letter) {
    return toupper(letter) - 'A' + 10;
}

// Fonction pour vérifier si l'IBAN est valide
int validate_iban(const char *iban) {
    int len = strlen(iban);
    
    // Vérifier la longueur de l'IBAN
    if (len < 14 || len > 34) {
        return 0; // Invalid length
    }
    
    // Vérifier que les deux premiers caractères sont des lettres et les deux suivants des chiffres
    if (!isalpha(iban[0]) || !isalpha(iban[1]) || !isdigit(iban[2]) || !isdigit(iban[3])) {
        return 0; // Invalid format
    }
    
    // Reconstituer le nombre à vérifier
    char rearranged[80] = {0}; // Assurez-vous que ce tableau est suffisamment grand pour contenir le nombre réarrangé
    int pos = 0;
    
    // Ajouter les caractères de l'IBAN à partir du 5ème caractère
    for (int i = 4; i < len; i++) {
        if (isalpha(iban[i])) {
            pos += sprintf(&rearranged[pos], "%d", letter_to_number(iban[i]));
        } else {
            rearranged[pos++] = iban[i];
        }
    }
    
    // Ajouter les 4 premiers caractères (après conversion pour les lettres)
    for (int i = 0; i < 4; i++) {
        if (isalpha(iban[i])) {
            pos += sprintf(&rearranged[pos], "%d", letter_to_number(iban[i]));
        } else {
            rearranged[pos++] = iban[i];
        }
    }
    
    // Convertir ce long nombre en entier (utilisation de l'arithmétique modulaire pour éviter les dépassements)
    long long num = 0;
    for (int i = 0; rearranged[i] != '\0'; i++) {
        num = (num * 10 + (rearranged[i] - '0')) % 97;
    }
    
    // Vérifier si le modulo 97 est égal à 1
    return (num == 1);
}

int main() {
    const char *iban = "BE87121212121294";
    
    if (validate_iban(iban)) {
        printf("IBAN is valid.\n");
    } else {
        printf("IBAN is invalid.\n");
    }
    
    return 0;
}
