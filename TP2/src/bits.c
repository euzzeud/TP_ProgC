#include <stdio.h>

int main() {
    int d = 1048592;
    int bit4, bit20;

    // Vérification des bits de gauche : on suppose un int sur 32 bits
    // 4ème bit de gauche = bit à la position 28 (32-4)
    bit4 = (d >> (32 - 4)) & 1;

    // 20ème bit de gauche = bit à la position 12 (32-20)
    bit20 = (d >> (32 - 20)) & 1;

    // Vérification si les deux bits sont à 1
    if (bit4 && bit20)
        printf("1\n");
    else
        printf("0\n");

    return 0;
}
