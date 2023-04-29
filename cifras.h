#include "defines.h"

// *****************************************************************
// Cabeçalhos dos cifradores
//  - Cada cifrador recebe como parâmetro:
//      * o texto aberto
//      * o tamanho do texto
//      * a chave para encriptar
// Ao fim da execução, o texto deve estar cifrado
// *****************************************************************

void cifrar_Cesar(char *texto, int tamanho, int chave);
void cifrar_Vernam_Mauborgne(char *texto, int tamanho, char *chave);

// *****************************************************************
// Cabeçalhos dos decifradores
//  - Cada cifrador recebe como parâmetro:
//      * o texto aberto
//      * o tamanho do texto
//      * a chave para encriptar
// Ao fim da execução, o texto deve estar decifrado
// *****************************************************************
void decifrar_Cesar(char *texto, int tamanho, int chave);
void decifrar_Vernam_Mauborgne(char *texto, int tamanho, char *chave);