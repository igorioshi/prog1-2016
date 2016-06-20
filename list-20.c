#include <stdio.h>
/*Tabela ASCII*/


void tabela_ascii(int inicio, int fim)
{
    int i;
    
    printf("\nDec \tSimbolo");
    for(i=inicio; i<=fim; i++)
    {
        printf("\n%d \t%x \t%c", i, i, i); //decimal=%d, hexa=%x, simbolo=%c//
        
    }
}

    //Tabela sem ser função//
 /*int i;
    
    printf("\nDec \tSimbolo");
    for(i=32; i<=127; i++)
    {
        printf("\n%d \t%x \t%c", i, i, i); //decimal=%d, hexa=%x, simbolo=%c//
        
    }*/
    
int main()
{
    tabela_ascii(32, 100);
    
    return 0;
}