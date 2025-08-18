#include <stdio.h>


    // Movimentação do Bispo = Diagonal superior direita + Recursiva 
    void moverBispo(int casas) {
    if (casas == 0) return;  // Condição de parada

    // Loop aninhado (duas direções pra cada)
    for (int i = 0; i < 1; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }

    moverBispo(casas - 1);  // Chamada recursiva
}


    // Movimentação da Torre = Segue direita + Recursiva 
    void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}


    // Movimentação da Rainha = Segue a esquerda + Recursiva 
    void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}


    // Movimentação do CAVALO - LOOP ANINHADOS ( FOR ) + CONTINUE & BREAK + Múltiplas Variáveis 
    void moverCavalo() {
    printf("Cavalo andará..\n");

    for (int i = 2, j = 1; i > 0 || j > 0;) {
        if (i > 0) {
            printf("Cima\n");
            i--;         // Decrementando o externo 
            continue;  // Próximo loop - 2x 
        }
        if (j > 0) {
            printf("Direita\n");
            j--;     // Deecrementando o interno 
            break; // Saindo após completar o movimento em L
        }
    }
}

int main() {
    // Chamada do Bispo
    printf("Bispo andará..\n");
    moverBispo(5);

    printf("\n");

    // Chamada da Torre
    printf("Torre andará..\n");
    moverTorre(5);

    printf("\n");

    // Chamada da Rainha
    printf("Rainha andará..\n");
    moverRainha(8);

    printf("\n");

    // Chamada do Cavalo
    moverCavalo();

    printf("\n");

    // Finalização das peças do primeiro jogador
    printf("Todos os movimentos executados do primeiro jogador!");

    return 0;
}
