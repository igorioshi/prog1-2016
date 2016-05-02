#include <stdio.h>
    //ler num e calcular maior e menor
    int main()
{
    int num;
    int resp;
    int maior=-999, menor=1000;

    do
    {
        printf("\n Entre com um numero[1-100]:");
        scanf("%d", &num);
        
        //guarda o maior numero
        if(num > maior)
            maior = num; //podia estar entre chaves, mas n precisa pq so tem 1 linha
            
        //guarda menor numero
        if(num < menor)
            menor = num;
        
        //continua no loop?
        printf("\nDesesa continuar? (1-sim/2-nao)");
        scanf("%d", &resp);
        
    }while(resp == 1);
    
    printf("\nMaior numero = %d", maior);
    printf("\nMenor numero = %d", menor);
    
    
    return 0;
}