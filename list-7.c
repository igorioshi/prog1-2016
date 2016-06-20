#include <stdio.h>
#include <math.h>
int main()
{
    float hip, cat1, cat2;
    
    printf("\nEntre com o valor do catetos 1: ");
    scanf("%f", &cat1);
     printf("\nEntre com o valor do catetos 2: ");
    scanf("%f", &cat2);
    
    hip = sqrt( (pow(cat1,2) + pow(cat2,2)) );
    
    printf("\nHipotenuza = %.2f", hip);
    
    
    return 0;
}