#include <stdio.h>
   
    int main()
{   
    //declarar variaveis
    int num1, num2;
    int soma;
    int subtracao;
    int mult;
    float divisao; //float para poder ter num decimal
    
    //ler do teclado
    printf("\nEntre com um numero:");
    scanf("%d", &num1);
    
    printf("\nEntre com outro numero:");
    scanf("%d", &num2);
    
    soma = num1 + num2;
    printf("\nSoma de %d + %d = %d", num1, num2, soma);
    
    
    subtracao = num1 - num2;
    printf("\nSubtracao de %d - %d = %d", num1, num2, subtracao);
    
    
    mult = num1 * num2;
    printf("\nMultiplicacao de %d * %d = %d", num1, num2, mult);
    
    
    divisao = (float)num1 / num2;
    printf("\nDivisao de %d / %d = %f\n", num1, num2, divisao);
    
    
    
    
    return 0;
}