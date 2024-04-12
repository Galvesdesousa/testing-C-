#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    if (num1 > num2) {
        printf("Maior número: %d\n", num1);
    } else {
        printf("Maior número: %d\n", num2);
    }

    if (num1 < num2) {
        printf("Menor número: %d\n", num1);
    } else {
        printf("Menor número: %d\n", num2);
    }

    return 0;
}