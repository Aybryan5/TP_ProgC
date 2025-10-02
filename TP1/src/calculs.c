#include <stdio.h>

int num1, num2;
char op;

int main() {
    printf("Entrez le premier nombre: ");
    scanf("%d", &num1);
    printf("Entrez le second nombre: ");
    scanf("%d", &num2);
    printf("Entrez l'opération (+, -, *, /): ");
    scanf(" %c", &op);

    switch (op) {
        case '+':
            printf("Résultat: %d\n", num1 + num2);
            break;
        case '-':
            printf("Résultat: %d\n", num1 - num2);
            break;
        case '*':
            printf("Résultat: %d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0) {
                printf("Résultat: %d\n", num1 / num2);
            } else {
                printf("Erreur: Division par zéro\n");
            }
            break;
        case '&&':
            printf("Résultat: %d\n", num1 && num2);
            break;
        case '|':
            printf("Résultat: %d\n", num1 || num2);
            break;
        case '~':
            printf("Résultat: %d\n", ~num1);
            break;
        default:
            printf("Erreur: Opération inconnue\n");
            break;
    }

    return 0;
}
