#include <stdio.h>
#include <stdbool.h>

// Módulo responsável pelo desenho de um segmento horizontal
void desenharSegmento(char caractere, int tamanho) {
    for (int i = 0; i < tamanho; i++) {
        printf("%c", caractere);
    }
}

// Módulo responsável pela contagem do números de pinos certos na posição certa
int contarCertosNaPosicao(char sequenciaEscondida[], char hipotese[]) {
    int contador = 0;
    for (int i = 0; i < 4; i++) {
        if (sequenciaEscondida[i] == hipotese[i]) {
            contador++;
        }
    }
    return contador;
}

// Módulo responsável pela contagem do número pinos certos, independentemente da posição
int contarCertos(char sequenciaEscondida[], char hipotese[]) {
    int contador = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            if (sequenciaEscondida[i] == hipotese[j]) {
                contador++;
                break;
            }
        }
    }
    return contador;
}

// Módulo responsável por verificar se um dado caractere é válido
bool validarCaractere(char caractere) {
    return (caractere == 'A' || caractere == 'B' || caractere == 'C' || caractere == 'D' || caractere == 'E' || caractere == 'F');
}

// Módulo responsável pela leitura de um caractere
void lerCaractere(const char *texto, char *caractere) {
    printf("%s", texto);
    scanf(" %c", caractere);
}

// Função principal
int main() {
    char sequenciaEscondida[4] = {'D', 'B', 'B', 'C'}; // Sequência escondida pré-definida
    char hipotese[4];
    int tentativas, certosNaPosicao, certos;

    printf("*** MasterMind ***\n");
    printf("Menu principal\n");
    printf("1. Jogar jogo\n");
    printf("2. Instruções\n");
    printf("3. Sair\n");

    int opcao;
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            printf("Introduza o número máximo de tentativas admitido: ");
            scanf("%d", &tentativas);

            for (int i = 0; i < tentativas; i++) {
                printf("Jogada: ");
                for (int j = 0; j < 4; j++) {
                    lerCaractere("", &hipotese[j]);
                    if (!validarCaractere(hipotese[j])) {
                        printf("Caractere ilegal!\n");
                        j--;
                    } else {
                        for (int k = 0; k <= j; k++) {
                            printf("%c", hipotese[k]);
                        }
                        printf("\n");

                        certosNaPosicao = contarCertosNaPosicao(sequenciaEscondida, hipotese);
                        certos = contarCertos(sequenciaEscondida, hipotese) - certosNaPosicao;

                        printf("[");
                        desenharSegmento('+', certosNaPosicao);
                        desenharSegmento('-', certos);
                        printf("]\n");

                        if (certosNaPosicao == 4) {
                            printf("Parabéns! :-)\n");
                            printf("Encontrou a sequência correta em %d tentativa(s).\n", i + 1);
                            return 0;
                        }
                    }
                }
            }

            printf("Perdeu! :-(\n");
            printf("A sequência correta era [ %c %c %c %c ].\n", sequenciaEscondida[0], sequenciaEscondida[1], sequenciaEscondida[2], sequenciaEscondida[3]);
            break;

        case 2:
            printf("Instruções\n");
            printf("Símbolos possíveis: A, B, C, D, E e F.\n");
            printf("Introduza um símbolo de cada vez.\n");
            printf("Por cada símbolo na posição correta é exibido um '+'.\n");
            printf("Por cada símbolo correto na posição errada é exibido um '-'.\n");
            break;

        case 3:
            printf("Obrigado por jogar! Até logo.\n");
            break;

        default:
            printf("Opção inválida! Por favor, selecione uma opção válida.\n");
    }

    return 0;
}