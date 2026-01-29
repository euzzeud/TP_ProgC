#include <stdio.h>

void afficher_binaire(int n) {
    // On suppose un int sur 32 bits
    int i;
    int debut = 0; // flag pour éviter d'afficher les zéros initiaux
    for (i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1; // Décaler le bit ième et faire un ET avec 1
        if (bit) debut = 1; // on commence à afficher à partir du premier 1
        if (debut) printf("%d", bit);
    }
    if (!debut) printf("0"); // pour le cas où n = 0
    printf("\n");
}

int main() {
    int nombres[] = {0, 4096, 65536, 65535, 1024};
    int taille = sizeof(nombres)/sizeof(nombres[0]);
    int i;

    for (i = 0; i < taille; i++) {
        printf("Le nombre %d en binaire est : ", nombres[i]);
        afficher_binaire(nombres[i]);
    }

    return 0;
}
