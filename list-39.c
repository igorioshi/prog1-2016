#include <stdio.h>

float CelParaFahr(float c)
{
     float f;
     
     f = c * 1.8 + 32; //esta variavel "c" esta declarada na funçao msm (float c)
    
    return f;
}

int main()
{
    float result, c;
    
    printf("\nEntre com o grau celsius: ");
    scanf("%f", &c);
    
    result = CelParaFahr(c);
    
     printf("\n*****************************************");
    printf("\nCelsius: %.2f  \tFahrenhit: %.2f\n", c, result);
    
    return 0;
}