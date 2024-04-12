#include <stdio.h>

int main() {
    int max_number;

    do {
        printf("Digite o número máximo (deve ser ímpar): ");
        scanf("%d", &max_number);
        if (max_number % 2 == 0) {
            printf("Por favor, digite um número ímpar.\n");
        }
    } while (max_number % 2 == 0);

    for (int i = 1; i <= max_number; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf(" ");
    for (int i = 2; i <= max_number - 1; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("  ");
    for (int i = 3; i <= max_number - 2; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("   ");
    for (int i = 4; i <= max_number - 3; i++) {
        printf("%d ", i);
    }
    printf("\n");

    printf("    5\n");

    return 0;
}