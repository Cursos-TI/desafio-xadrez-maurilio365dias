#include <stdio.h> 

int main() {
    // Requisitos Funcionais: Valores para o número de casas definidos diretamente no código.
    
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;
     //  movimento do Cavalo
    const int MOV_CAVALO_VERTICAL = 2;
    const int MOV_CAVALO_HORIZONTAL = 1;

    printf("--- Desafio de Xadrez: Simulacao de Movimentos ---\n\n");

    // -----------------------------------------------------------
    // 1. Movimentação da Torre 
    //  Simular 5 casas para a direita.
    printf("[TORRE] Movendo %d casas para a direita (usando for):\n", CASAS_TORRE);
    // Inicializa contador 'i' em 0, continua enquanto 'i' for menor que o total de casas,
    for (int i = 0; i < CASAS_TORRE; i++) {
        // Imprime a direção do movimento a cada casa percorrida.
        printf("Direita\n");
    }
    printf("\n"); // Linha 

    // 2. Movimentação do Bispo 
    // Simular 5 casas na diagonal para cima e à direita.
 
    printf("[BISPO] Movendo %d casas na diagonal (Cima, Direita) (usando while):\n", CASAS_BISPO);
    int contador_bispo = 0; 
    while (contador_bispo < CASAS_BISPO) {
        // Imprime a combinação das direções para representar o movimento diagonal.
        printf("Cima, Direita\n");
    
        contador_bispo++;
    }
    printf("\n");// Linha


    // 4. Movimentação do Cavalo 
    printf("[CAVALO] Movendo em 'L' (2 Baixo, 1 Esquerda) (usando loops aninhados):\n");
    // Loop externo 
        for (int i = 0; i < MOV_CAVALO_VERTICAL; i++) {
        printf("Baixo\n");
    }
    // Loop interno/secundário 
    int contador_horizontal = 0;
    while (contador_horizontal < MOV_CAVALO_HORIZONTAL) {
        printf("Esquerda\n");
        contador_horizontal++;
    }

    printf("\n--- Fim do Programa ---\n");

    return 0;

}
