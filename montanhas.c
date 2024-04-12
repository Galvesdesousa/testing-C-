#include <stdio.h>

int montanhas(char str[]) {
    int altitude = 0; 
    int montanhas = 0; 
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == 'S') {
            altitude++;
        }
        else if (str[i] == 'D') {
            altitude--;
        }
        if (altitude > 0 && (str[i + 1] == 'D' || str[i + 1] == '\0')) {
            montanhas++;
        }
         i++;
    }

    return montanhas;
}

int main() {
    char sequencia[] = "SSDSDDSDDDSS";
    int num_montanhas = montanhas(sequencia);
    printf("Número de montanhas encontradas: %d\n", num_montanhas);
    return 0;
}