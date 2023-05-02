#include "cifras.h"

void cifrar_Cesar(char *texto, int tamanho, int chave){    
    char alpha[MAX_ALPHA] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for (int i = 0; i < tamanho; i++) { // anda pelo texto 
        for (int j = 0; j < MAX_ALPHA; j++) { // anda pelo alfabeto
            if (alpha[j] == texto[i]) {
                texto[i] = alpha[(j + chave) % MAX_ALPHA];
                break; 
            }
        }
    }
}    

void cifrar_Vernam_Mauborgne(char *texto, int tamanho, char *chave){
    for (int i = 0; i < tamanho; i++) { 
        texto[i] = (("%d", texto[i]) ^ ("%d", chave[i]));
    }
}

void decifrar_Cesar(char *texto, int tamanho, int chave) {
    char alpha[MAX_ALPHA] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

    for (int i = 0; i < tamanho; i++) { // anda pelo texto 
        for (int j = MAX_ALPHA-1; j >= 0; j--) {
            if (alpha[j] == texto[i]) {
                texto[i] = alpha[(j + chave + MAX_ALPHA) % MAX_ALPHA];
                break;
            }
        }
    }
}

void decifrar_Vernam_Mauborgne(char *texto, int tamanho, char *chave){
    tamanho = MAX_TAM_TEXTO; 
    for (int i = 0; i < tamanho; i++) { 
        texto[i] = ("%c", ("%c", texto[i] ^ ("%d", chave[i])));
    }
}
