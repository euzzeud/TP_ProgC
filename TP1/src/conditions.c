#include <stdio.h>

int main() {

    int somme = 0;

    for (int i = 1; i <= 1000; i++) {

        // Ignorer les multiples de 11
        if (i % 11 == 0) {
            continue;
        }

        // Ajouter si divisible par 5 OU 7
        if (i % 5 == 0 || i % 7 == 0) {
            somme += i;
        }

        // Stop si somme dépasse 5000
        if (somme > 5000) {
            break;
        }
    }

    printf("Somme finale : %d\n", somme);

    return 0;
}
