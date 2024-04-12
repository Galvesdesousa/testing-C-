#include <stdio.h>

int main() {
  
    int numero;


    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    
    if (numero > 20) {
        printf("Maior que 20\n");
    }

    return 0;
}