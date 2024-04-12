#include <stdio.h>

int main() {

    int numero;

    
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

   
    if (numero > 20) {
       int resultado = numero * 2;
       printf("Resultado: %d\n", resultado);
    }

    return 0;
}