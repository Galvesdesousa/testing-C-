#include <stdio.h>
#include <stdlib.h>

#define BOARD_SIZE 3

char board[BOARD_SIZE][BOARD_SIZE];

// Função para inicializar o tabuleiro
void initializeBoard() {
    int i, j;
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            board[i][j] = ' ';
        }
    }
}

// Função para imprimir o tabuleiro
void printBoard() {
    int i, j;
    printf("\n");
    for (i = 0; i < BOARD_SIZE; i++) {
        for (j = 0; j < BOARD_SIZE; j++) {
            printf(" %c ", board[i][j]);
            if (j < BOARD_SIZE - 1) printf("|");
        }
        printf("\n");
        if (i < BOARD_SIZE - 1) {
            for (j = 0; j < BOARD_SIZE; j++) {
                printf("---");
                if (j < BOARD_SIZE - 1) printf("|");
            }
            printf("\n");
        }
    }
    printf("\n");
}

// Função para verificar se há um vencedor
char checkWinner() {
    int i;
    // Verificar linhas e colunas
    for (i = 0; i < BOARD_SIZE; i++) {
        if (board[i][0] != ' ' && board[i][0] == board[i][1] && board[i][1] == board[i][2]) return board[i][0]; // Linhas
        if (board[0][i] != ' ' && board[0][i] == board[1][i] && board[1][i] == board[2][i]) return board[0][i]; // Colunas
    }
    // Verificar diagonais
    if (board[0][0] != ' ' && board[0][0] == board[1][1] && board[1][1] == board[2][2]) return board[0][0]; // Diagonal principal
    if (board[0][2] != ' ' && board[0][2] == board[1][1] && board[1][1] == board[2][0]) return board[0][2]; // Diagonal secundária
    return ' '; // Se não houver vencedor ainda
}

// Função para verificar se a jogada é válida
int isValidMove(int row, int col) {
    if (row < 0 || row >= BOARD_SIZE || col < 0 || col >= BOARD_SIZE || board[row][col] != ' ') {
        return 0; // Movimento inválido
    }
    return 1; // Movimento válido
}

// Função principal
int main() {
    int currentPlayer = 0; // Índice do jogador atual (0 para jogador 1 e 1 para jogador 2)
    int totalMoves = 0; // Contador de movimentos
    int row, col;
    char winner;

    initializeBoard(); // Inicializar o tabuleiro

    printf("Bem-vindo ao Jogo do Galo!\n");

    // Loop principal do jogo
    do {
        printf("Tabuleiro atual:\n");
        printBoard();

        // Obter a jogada do jogador atual
        do {
            printf("Jogador %d, por favor, insira a linha e a coluna da sua jogada (ex: 1 2 refere linha 1, segunda posição): ", currentPlayer + 1);
            scanf("%d %d", &row, &col);
            row--; // Ajustar para a indexação do array
            col--; // Ajustar para a indexação do array
        } while (!isValidMove(row, col));

        // Fazer a jogada
        if (currentPlayer == 0) {
            board[row][col] = 'X';
        } else {
            board[row][col] = 'O';
        }
        totalMoves++;

        // Verificar se há um vencedor ou empate
        winner = checkWinner();
        if (winner != ' ' || totalMoves == BOARD_SIZE * BOARD_SIZE) break;

        // Alternar o jogador atual
        currentPlayer = (currentPlayer + 1) % 2;
    } while (1);

    // Imprimir o resultado
    printf("Tabuleiro final:\n");
    printBoard();
    if (winner != ' ') {
        printf("Parabéns! O jogador %c ganhou!\n", winner);
    } else {
        printf("O jogo empatou!\n");
    }

    return 0;
}