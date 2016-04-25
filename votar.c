#include <stdio.h>
    int main()
    
{
    int idade;
    
    printf("\nDiga sua idade:");
    scanf("%d", &idade);
    
    if(idade <= 15 )
    {
        printf("\nNao pode votar\n");
    }
    else if(idade == 16 || idade ==17 || idade > 70)
    {
        printf("\nVoto FACULTATIVO");
    }
    else
    {
        printf("\nObrigado a votar");
    }
    
    return 0;
}