#include "testes.h"

// ****************************************************************
// Funções para testar as cifras
// ****************************************************************
void mostrar_chars(char *texto, int tamanho) {
    for (int i=0; i<MAX_TAM_TEXTO; i++) {
        printf(" %d", texto[i]);
    }
    printf("\n");
}

void avaliar(char *texto, char *esperado) {
    //// Avaliando o resultado
    if (strcmp(texto, esperado) != 0) {
        printf("- ERRO\n");
        printf("    Resultado esperado: %s\n", esperado);
        printf("    Resultado obtido: %s\n", texto);
        printf("Em decimal:\n");
        printf("    Esperado:"); mostrar_chars(esperado, strlen(esperado));
        printf("    Obtido  :"); mostrar_chars(texto, strlen(texto));
    }
    else {
        printf(" - OK\n");
    }
}


void gabarito_Vernam_Mauborgne(char * gabarito, int teste) {
    switch(teste) {
        case 1:
            memset(gabarito, 0, sizeof(char)*MAX_TAM_TEXTO);
            break;

        case 2:
            memset(gabarito, 0, sizeof(char)*MAX_TAM_TEXTO);
            gabarito[0] = 24;
            gabarito[1] = 0;
            gabarito[2] = 80;
            gabarito[3] = 87;
            gabarito[4] = 0;
            gabarito[5] = 0;
            gabarito[6] = 83;
            gabarito[7] = 92;
            gabarito[8] = 0;
            gabarito[9] = 0;
            gabarito[10] = 94;
            gabarito[11] = 89;
            gabarito[12] = 0;
            gabarito[13] = 0;
            gabarito[14] = 0;
            gabarito[15] = 71;
            gabarito[16] = 70;
            gabarito[17] = 0;
            gabarito[18] = 0;
            gabarito[19] = 0;
            gabarito[20] = 0;
            gabarito[21] = 0;
            gabarito[22] = 67;
            gabarito[23] = 65;
            gabarito[24] = 0;
            gabarito[25] = 70;
            gabarito[26] = 0;
            gabarito[27] = 0;
            gabarito[28] = 0;
            gabarito[29] = 0;
            gabarito[30] = 0;
            gabarito[31] = 0;
            gabarito[32] = 0;
            gabarito[33] = 0;
            gabarito[34] = 0;
            gabarito[35] = 0;
            gabarito[36] = 0;
            gabarito[37] = 0;
            gabarito[38] = 0;
            gabarito[39] = 0;
            gabarito[40] = 0;
            gabarito[41] = 0;
            gabarito[42] = 0;
            gabarito[43] = 0;
            gabarito[44] = 0;
            break;

        default:
            printf("ERRO! Teste não definido!\n");
    }
}