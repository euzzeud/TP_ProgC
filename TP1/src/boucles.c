#include <stdio.h>

/* i = numéro de ligne
j = position dans la ligne */

int main() {
    int compteur = 11;

    if (compteur < 10 ) {

    for (int i = 1; i <= compteur; i++) {
        for (int j = 1; j <= i; j++) {
            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            }
            else {
                printf("# ");
            }
        }
        printf("\n");
    }

    return 0;
} else {
    printf("La variable 'compteur' n'est pas strictement inférieur à 10. Arrêt du programme.");
    return 1;
}

}