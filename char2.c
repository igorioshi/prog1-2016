#include <stdio.h>
int main()
{
    char letra;
    
    printf("\nEntre com uma letra qualquer:");
    letra = getchar();
    
    if(letra>=65 && letra<=90)
    {
            
            printf("\nEsta letra eh MAIUSCULA\n");
    }
    else if(letra>=97 && letra<=122)
    {
        printf("\n Esta letra eh minuscula\n");
    }
    
    else
    {
        printf("\nProvavelmente voce digitou um simbolo");
    }
    
    return 0;
    
}