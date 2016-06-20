#include <stdio.h>

float soma(float a, int b)
{
    float result;   //declaraçao de variaveis eh igual se faz funçao main (so sao lidas nessa funçao)
    
    result=a+b;
    return result;
}

int main()
{
    int a;
    float b, res;
    
    a = 10;
    b = 12.3;
    
    res = soma(b,a); //chamada da funçao soma(12.3 , 10);
    
    printf("A soma de %d com %6.3f é %6.3f\n", a, b, res);
    
    return 0;
}