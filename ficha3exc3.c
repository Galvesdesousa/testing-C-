#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    if (num2 != 0) {
        float result = (float)num1 / num2;  
        printf("A divisão dos dois números é: %.2f\n", result);
    } else {
        printf("Erro: Não é possível dividir por zero.\n");
    }

    return 0;
}