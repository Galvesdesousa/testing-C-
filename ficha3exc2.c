#include <stdio.h>

int main() {
    int num1, num2;

    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    int highnum, lownum;
    if (num1 > num2) {
        highnum = num1;
        lownum = num2;
    } else {
        highnum = num2;
        lownum = num1;
    }

    int diff = highnum - lownum;
    printf("A diferença entre o maior e o menor número é: %d\n", diff);

    return 0;
}