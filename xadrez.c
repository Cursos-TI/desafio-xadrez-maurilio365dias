#include <stdio.h> 

int main() {
    // Requisitos Funcionais: Valores para o número de casas definidos diretamente no código.
    
    const int CASAS_TORRE = 5;
    const int CASAS_BISPO = 5;
    const int CASAS_RAINHA = 8;

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

    
    // 3. Movimentação da Rainha 
    // Requisito: Simular 8 casas para a esquerda.
    printf("[RAINHA] Movendo %d casas para a esquerda (usando do-while):\n", CASAS_RAINHA);
    int contador_rainha = 0;
    if (CASAS_RAINHA > 0) {
        do {
            printf("Esquerda\n");
            contador_rainha++;
        } while (contador_rainha < CASAS_RAINHA); 
    } else {
        printf("A Rainha nao se moveu (0 casas).\n");
    }

    printf("\n--- Fim do Programa ---\n");

    return 0;
}
