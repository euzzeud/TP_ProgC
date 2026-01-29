#include <stdio.h>

int main() {

    int num1, num2;
    char op;

    printf("Entrez le premier nombre : ");
    scanf("%d", &num1);

    printf("Entrez le deuxieme nombre : ");
    scanf("%d", &num2);

    printf("Choisissez une operation (+, -, *, /, %%, &, |, ~) : ");
    scanf(" %c", &op);

    switch (op) {

        case '+':
            printf("Resultat : %d\n", num1 + num2);
            break;

        case '-':
            printf("Resultat : %d\n", num1 - num2);
            break;

        case '*':
            printf("Resultat : %d\n", num1 * num2);
            break;

        case '/':
            if (num2 != 0)
                printf("Resultat : %d\n", num1 / num2);
            else
                printf("Erreur : division par zero\n");
            break;

        case '%':
            if (num2 != 0)
                printf("Resultat : %d\n", num1 % num2);
            else
                printf("Erreur : modulo par zero\n");
            break;

        case '&':
            printf("Resultat (AND binaire) : %d\n", num1 & num2);
            break;

        case '|':
            printf("Resultat (OR binaire) : %d\n", num1 | num2);
            break;

        case '~':
            printf("Resultat (NOT binaire de num1) : %d\n", ~num1);
            break;

        default:
            printf("Operateur invalide !\n");
    }

    return 0;
}
