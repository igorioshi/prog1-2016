#include <stdio.h>

int main()
{
    float f, c;
    
    printf("\nEntre com o C°: ");
    scanf("%f", &c);
    
    f = c * 1.8 + 32;
    
    printf("\n************************");
    printf("\nCelsius: %.2f  \tFahrenhit: %.2f\n", c, f);
}