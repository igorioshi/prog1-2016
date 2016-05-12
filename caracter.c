#include <stdio.h>
int main()
{
    char lt;
    
    printf("\nEntre com uma letra MAIUSCULA:");
    lt = getchar();
    
    printf("\n Caracter lido = %c\n", lt);
    printf("\n Codigo ASCII = %d\n", lt);
    printf("\n Conversao para minuscula = %c \n",lt+32);
    
    return 0;
    
}