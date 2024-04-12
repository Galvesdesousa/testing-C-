#include <stdio.h>

#define MAX_NUMEROS 10

int main() {
    int numeros[MAX_NUMEROS];
    int soma = 0;
    int num_pares = 0;
    int i, num;

    printf("Digite os numeros (maximo de 10 numeros, digite 0 para parar):\n");
    for (i = 0; i < MAX_NUMEROS; i++) {
        scanf("%d", &num);

        if (num == 0) {
            break;
        }

        numeros[i] = num;

        soma += num;

        if (num % 2 == 0) {
            num_pares++;
        }
    }

    printf("Numeros digitados:\n");
    for (int j = 0; j < i; j++) {
        printf("%d ", numeros[j]);
    }
    printf("\n");

    printf("Soma dos numeros: %d\n", soma);
    printf("Numero de numeros pares: %d\n", num_pares);

    return 0;
}