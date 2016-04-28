#include <stdio.h>
    //gerar tabuada multiplicacao lendo um numero do teclado
        int main()
    
{
    int num1;
    int num2;
    int mult;
    
    printf("\nTabuada de mult \n");
    printf("\nEntre com um numero para mult:");
    scanf("%d", &num1);
    
        for(num2= 1; num2<=10; num2++) //contador somando de 1 em 1
        {
        mult = num1 * num2; 
        printf("\n %d x %d = %d", num1, num2, mult);
        }    

    
    
    return 0;
}