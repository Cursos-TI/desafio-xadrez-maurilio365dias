#include <stdio.h>
const int MOV_TORRE = 5;
const int MOV_BISPO = 5;
const int MOV_RAINHA = 8;
const int MOV_CAVALO_VERTICAL = 2;
const int MOV_CAVALO_HORIZONTAL = 1;

//  movimento da Torre (para a direita).
void moverTorreRecursivo(int casas_restantes) {
    if (casas_restantes <= 0) {
        return; //para a recursao quando nao ha mais casas a mover.
    }
    printf("Direita\n");
    // move a proxima casa.
    moverTorreRecursivo(casas_restantes - 1);
}

// movimento da Rainha (para a esquerda).
void moverRainhaRecursivo(int casas_restantes) {
    //se nao ha casas restantes, retorna.
    if (casas_restantes <= 0) {
        return;
    }
    printf("Esquerda\n");
    moverRainhaRecursivo(casas_restantes - 1);
}

int main() {
    printf("--- Desafio de Xadrez: Nivel Mestre ---\n\n");
     // 1. Movimentação da Torre 
    
    printf("[TORRE] Movendo %d casas para a direita:\n", MOV_TORRE);
    moverTorreRecursivo(MOV_TORRE);
    printf("\n");

   
    // 2. Movimentação do Bispo 
    // Simulamos 5 movimentos diagonais (Cima, Direita).
    printf("[BISPO] Movendo %d casas na diagonal Cima, Direita:\n", MOV_BISPO);
    
    // controla o movimento vertical (Cima)
    for (int i = 0; i < MOV_BISPO; i++) {
        int j = 0;
        while (j < 1) { 
            printf("Cima, Direita\n");
            j++;
        }
    }
    printf("\n");

    // 3. Movimentação da Rainha 

    printf("[RAINHA] Movendo %d casas para a esquerda :\n", MOV_RAINHA);
    moverRainhaRecursivo(MOV_RAINHA);
    printf("\n");

  
    // 4. Movimentação do Cavalo 

    printf("[CAVALO] Movendo em 'L' 2 Cima, 1 Direita:\n");

    int move_v = 0;
  
    while (1) {
        //  interno para o movimento vertical 
        for (int i = 0; i < MOV_CAVALO_VERTICAL; i++) {
            if (move_v >= MOV_CAVALO_VERTICAL) {
                break; 
            }
            printf("Cima\n");
            move_v++;
        }

        // Se o movimento vertical foi concluído, passam para o horizontal.
        if (move_v == MOV_CAVALO_VERTICAL) {
            // para o movimento horizontal (Direita)
            int move_h = 0;
            while (move_h < MOV_CAVALO_HORIZONTAL) {
                printf("Direita\n");
                move_h++;
            }
            break; 
        }
    }

    printf("\n--- Fim do Programa Mestre ---\n");

    return 0;
}