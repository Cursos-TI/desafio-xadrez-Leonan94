#include <stdio.h>

int main()
{
    // nivel novato - movimentacao das pecas
    // declaracao de variaveis
    int b = 5;
    int t = 5;
    int r = 8;

    //movimentacao do bispo
    for ( b = 0 ; b < 5 ; b++) {
        printf("*bispo* diagonal superior direita \n");// imprime a direcao do movimento
    }
    
    //movimentacao da torre
    for ( t = 0 ; t < 5 ; t++) {
        printf("*torre* direita \n");// imprime a direcao do movimento
    }
    
    //movimentacao do rainha
    for ( r = 0 ; r < 8 ; r++) {
        printf("*rainha* esquerda\n");// imprime a direcao do movimento
    }
    
    return = 0;
}