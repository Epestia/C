#include <stdio.h>

void fibonacci(int n) {
    int t1 = 0, t2 = 1, nextTerm;

    printf("Suite de Fibonacci jusqu'à %d termes:\n", n);

    for (int i = 1; i <= n; i++) {
        printf("%d ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}

int main() {
    int n;

    printf("Entrez le nombre de termes: ");
    scanf("%d", &n);

    fibonacci(n);

    return 0;
}
