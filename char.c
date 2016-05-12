#include <stdio.h>
int main()
{
    char num;
    
    printf("\nTabela ASCII");
    printf("\n--------------");
    printf("\nDec\tChar");
    
    for(num = 33; num <= 126; num++)
    {
        printf("\n%d \t%c \t", num, num);
    }
    
    return 0;
    
}