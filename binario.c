#include <stdio.h>
int main()
{
   int num, bin=0, pot10=1, rest;
    printf("entre com um numero inteiro: ");
    scanf("%d", &num);
    while(num>0)
    {
        rest = num%2;
        num = num/2;
        bin = bin + rest*pot10;
        pot10 = pot10*10;
    }
    printf("%d\n", bin);
    
    return 0;
}