#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int counter = 0;

    
    printf("Digite uma string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; i < strlen(str); i++) {
        if (str[i] == 'a') {
            str[i] = 'b';
            counter++;
        }
    }

    printf("Número de caracteres modificados: %d\n", counter);
    printf("String modificada: %s", str);

    return 0;
}