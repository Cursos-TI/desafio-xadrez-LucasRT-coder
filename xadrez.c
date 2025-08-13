#include <stdio.h>

int main() {
    
    // variáveis declaradas 
    int bispo = 5; 
    int torre = 5; 
    int rainha = 8; 
    int i = 1; 
    int i; 


    // Movimentação do Bispo = Diagonal superior direita
    printf("Bispo andará..\n"); 

    for (i = 1; i <= bispo; i++)   // inicia, condição e incremento
    {
        printf("Cima\n");
        printf("Direita\n"); 
    }

    printf("\n");

    // Movimentação da Torre = Segue direita 
    printf("Torre andará..\n");

    while (i <= torre)    // Condição 
    {
        printf("Direita\n");    // Saída
        i++;                 // incremento para final de curso / sem loops 
    }

    printf("\n");

    // Movimentação da Rainha = Segue a esquerda
    printf("Rainha andará..\n"); 

    do {
        printf("Esquerda\n");     // Saída 
        i++;                    // Incremento sem loops
    } while (i <= rainha);    // Condição 

    // Finalização das peças do primeiro jogador
    printf("Todos os movimentos executados do primeiro jogador!");

    return 0;
}
