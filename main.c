#include "cifras.h"
#include "defines.h"
#include "testes.h"
#include <stdio.h>
#include <string.h>



int main() {
    int i;
    char texto[MAX_TAM_TEXTO];
    char esperado[MAX_TAM_TEXTO];
    char k[MAX_TAM_TEXTO];

    // ***********************
    // Teste da cifra de César
    // ***********************
    printf("**********************************\n");
    printf("Testando cifra de César\n");
    printf("**********************************\n");
    /* 1º Teste */
    printf("k = 1");
    strcpy(texto, "abcdefghijklmnopqrstuvzxyw");
    strcpy(esperado, "bcdefghijklmnopqrstuvwayzx");
    cifrar_Cesar(texto, strlen(texto), 1);
    
    //// Avaliando o resultado
    avaliar(texto, esperado);


        

    /* 2º Teste */
    printf("k = 2");
    strcpy(texto, "abcdefghijklmnopqrstuvzxyw");
    strcpy(esperado, "cdefghijklmnopqrstuvwxbzay");
    cifrar_Cesar(texto, strlen(texto), 2);
    
    //// Avaliando o resultado
    avaliar(texto, esperado);




    /* 3º Teste */
    printf("k = 3");
    strcpy(texto, "abcdefghijklmnopqrstuvzxyw");
    strcpy(esperado, "defghijklmnopqrstuvwxycabz");
    cifrar_Cesar(texto, strlen(texto), 3);
    
    //// Avaliando o resultado
    avaliar(texto, esperado);




    /* 4º Teste */
    printf("k = 25");
    strcpy(texto, "abcdefghijklmnopqrstuvzxyw");
    strcpy(esperado, "zabcdefghijklmnopqrstuywxv");
    cifrar_Cesar(texto, strlen(texto), 25);
    
    //// Avaliando o resultado
    avaliar(texto, esperado);




    /* 5º Teste */
     printf("k = 26");
    strcpy(texto, "abcdefghijklmnopqrstuvzxyw");
    strcpy(esperado, "abcdefghijklmnopqrstuvzxyw");
    cifrar_Cesar(texto, strlen(texto), 26);
    
    //// Avaliando o resultado
    avaliar(texto, esperado);




    /* 6º Teste */
    printf("k = 27");
    strcpy(texto, "abcdefghijklmnopqrstuvzxyw");
    strcpy(esperado, "bcdefghijklmnopqrstuvwayzx");
    cifrar_Cesar(texto, strlen(texto), 27);
    
    //// Avaliando o resultado
    avaliar(texto, esperado);




    /* 7º Teste */
    printf("k = 45");
    strcpy(texto, "abcdefghijklmnopqrstuvzxyw");
    strcpy(esperado, "tuvwxyzabcdefghijklmnosqrp");
    cifrar_Cesar(texto, strlen(texto), 45);
    
    //// Avaliando o resultado
    avaliar(texto, esperado);



    
    // **********************************
    // Teste da cifra de Vernam Mauborgne
    // **********************************
    printf("**********************************\n");
    printf("Testando cifra de Vernam Mauborgne\n");
    printf("**********************************\n");


    printf("1º Teste\n");
    strcpy(texto, "abcdefghijklmnopqrstuvzxyw");
    strcpy(k,     "abcdefghijklmnopqrstuvzxyw");
    cifrar_Vernam_Mauborgne(texto, strlen(texto), k);
    gabarito_Vernam_Mauborgne(esperado, 1);
    avaliar(texto, esperado);
    

    printf("2º Teste\n");
    strcpy(texto, "abcdefghijklmnopqrstuvzxyw");
    strcpy(k,     "yb33ef44ij55mno77rstuv99y1");
    cifrar_Vernam_Mauborgne(texto, strlen(texto), k);
    gabarito_Vernam_Mauborgne(esperado, 2);
    avaliar(texto, esperado);


    return 0;
}
