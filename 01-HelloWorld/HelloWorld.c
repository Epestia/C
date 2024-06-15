#include <stdio.h>

// Fonction principale
int main() {
    // Simple Hello, World!
    printf("Hello, World!\n");

    // Hello, World! en majuscules
    printf("HELLO, WORLD!\n");

    // Hello, World! avec des tirets
    printf("Hello-World!\n");

    // Hello, World! avec des étoiles
    printf("***Hello, World!***\n");

    // Hello, World! centré
    printf("%25s\n", "Hello, World!");

    // Hello, World! avec des sauts de ligne
    printf("Hello,\nWorld!\n");

    // Hello, World! dans une boîte
    printf("+---------------+\n");
    printf("| Hello, World! |\n");
    printf("+---------------+\n");

    // Hello, World! avec des points d'exclamation supplémentaires
    printf("Hello, World!!!!!!!!\n");

    // Hello, World! répété plusieurs fois
    for (int i = 0; i < 3; i++) {
        printf("Hello, World!\n");
    }

    return 0;
}
