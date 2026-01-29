#include <stdio.h>
#include <string.h>

int main() {
    
    int a = 16;
    int b = 3;

    printf("Valeur de a : %d\n", a);
    printf("Valeur de b : %d\n\n", b);
    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d\n", a / b);
    printf("a %% b = %d\n\n", a % b);  // %% pour afficher %
    printf("a == b : %d\n", a == b);
    printf("a > b : %d\n", a > b);

    return 0;
}