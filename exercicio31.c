#include <stdio.h>

int main() {

    int numero;
    int antecessor;
    int sucessor;

    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    antecessor = numero - 1;
    sucessor = numero + 1;

    printf("O antecessor de %d é: %d\n", numero, antecessor);
    printf("O sucessor de %d é: %d\n", numero, sucessor);

    return 0;
}