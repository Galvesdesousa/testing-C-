#include <stdio.h>

char rodarLetra(char ch) {
    // Verifica se o caractere é uma letra maiúscula
    if (ch >= 'A' && ch <= 'Z') {
        // Rotaciona o caractere em uma posição
        ch++;
        // Se após a rotação o caractere for 'Z', retorna 'A'
        if (ch > 'Z') {
            ch = 'A';
        }
    }
    // Verifica se o caractere é uma letra minúscula
    else if (ch >= 'a' && ch <= 'z') {
        // Rotaciona o caractere em uma posição
        ch++;
        // Se após a rotação o caractere for 'z', retorna 'a'
        if (ch > 'z') {
            ch = 'a';
        }
    }
    // Retorna o caractere original se não for uma letra
    return ch;
}

int main() {
    char letter;

    printf("Enter a letter: ");
    scanf(" %c", &letter); // Space before %c to consume any whitespace characters

    // Call rodarLetra function with the input letter
    char rotatedLetter = rodarLetra(letter);

    printf("The rotated letter is: %c\n", rotatedLetter);

    return 0;
}