#include <stdio.h>
    int main()
{
    int num;
    num= 1;
    
    printf("\nEntre com um numero de 1 a 10:");
    
    
    do
    {
        printf("\n %d", num);
        num++;
    }
    while(num <= 10);
    
    return 0;
}