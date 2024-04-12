#include <stdio.h>

int main() {

    int valor1;
    int valor2;
    int valor3;
    int soma;

    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    printf("Digite o terceiro valor inteiro: ");
    scanf("%d", &valor3);

    soma = valor1 + valor2 + valor3;

    printf("A soma dos três valores é: %d\n", soma);

    return 0;
}