#include <stdio.h>
int main()
{
    int vetor[5], i, chave, cont=0;
    
    for(i=0; i<5; i++)
    {
        scanf("%d", &vetor[i]);
    }
    
    printf("\nEntre com uma chave: ");
    scanf("%d", &chave);
    
    for(i=0; i<5; i++)
    {
        if(vetor[i]==chave)
        {
            cont++;
        }
    }
    printf("\nO numero %d apareceu %d vezes!", chave, cont);
    
    return 0;
}