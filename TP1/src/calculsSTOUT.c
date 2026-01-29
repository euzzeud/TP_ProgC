#include <stdio.h>

int main() {

    int num1, num2;
    char op;

    printf("Entrez le premier nombre : ");
    fflush(stdout);
    scanf("%d", &num1);

    printf("Entrez le deuxieme nombre : ");
    fflush(stdout);
    scanf("%d", &num2);

    printf("Choisissez une operation (+, -, *, /, %%, &, |, ~) : ");
    fflush(stdout);
    scanf(" %c", &op);

    switch (op) {
        case '+': printf("Resultat : %d\n", num1 + num2); break;
        case '-': printf("Resultat : %d\n", num1 - num2); break;
        case '*': printf("Resultat : %d\n", num1 * num2); break;
        case '/':
            if (num2 != 0) printf("Resultat : %d\n", num1 / num2);
            else printf("Erreur division par zero\n");
            break;
        case '%':
            if (num2 != 0) printf("Resultat : %d\n", num1 % num2);
            else printf("Erreur modulo par zero\n");
            break;
        case '&': printf("Resultat : %d\n", num1 & num2); break;
        case '|': printf("Resultat : %d\n", num1 | num2); break;
        case '~': printf("Resultat : %d\n", ~num1); break;
        default: printf("Operateur invalide\n");
    }

    return 0;
}
