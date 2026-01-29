#include <stdio.h>

int main() {
    int a = 2;    // Base
    int b = 3;    // Exposant
    int resultat = 1; // On initialise à 1, car toute puissance à 0 commence par 1

    // Calcul de la puissance a^b
    for (int i = 1; i <= b; i++) {
        resultat = resultat * a;
    }

    // Affichage du résultat
    printf("%d élevé à la puissance %d est : %d\n", a, b, resultat);

    return 0;
}
