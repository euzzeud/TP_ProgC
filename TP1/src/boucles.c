#include <stdio.h>

/* i = numéro de ligne
j = position dans la ligne */

int main() {
    int compteur = 5;

    if (compteur < 10 ) {

    printf("=== BOUCLE ====\n");
    printf("==== FOR ====\n\n");
    
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

    printf("\n\n=== BOUCLE ====\n");
    printf("==== WHILE ====\n\n");

    int i = 1;

    while (i <= compteur) {
        int j = 1;

        while (j <= i) {

            if (j == 1 || j == i || i == compteur) {
                printf("* ");
            } else {
                printf("# ");
            }

            j++;
        }

        printf("\n");
        i++;
    }

    return 0;
} else {
    printf("La variable 'compteur' n'est pas strictement inférieur à 10. Arrêt du programme.");
    return 1;
}

}