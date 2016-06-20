#include <stdio.h>

int sigma(int num)
{
    int soma;
    
    for(soma=0; num>=1; num--)//começa em zero pq se nao soma o num 1
    
    soma = soma + num;
    
    return soma;
}


int main()
{
    int num;
    
        printf("\nEntre com um numero interiro: ");
        scanf("%d", &num);
        
        printf("\n Sigma de %d = %d \n", num, sigma(num) );
        
        return 0;
}
