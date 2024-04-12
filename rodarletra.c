#include <stdio.h>

char rodarLetra(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        ch++;
        if (ch > 'Z') {
            ch = 'A';
        }
    }
    else if (ch >= 'a' && ch <= 'z') {
        ch++;
        if (ch > 'z') {
            ch = 'a';
        }
    }
    return ch;
}

int main() {
    char letter;

    printf("Enter a letter: ");
    scanf(" %c", &letter); 

    char rotatedLetter = rodarLetra(letter);

    printf("The rotated letter is: %c\n", rotatedLetter);

    return 0;
}