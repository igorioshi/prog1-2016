#include <stdio.h>
int main()
{
    int matriz[4][4];
    int col, linha, tab;
    
    for(linha=0; linha<4; linha++)
    {
        for(col=0; col<4; col++)
        {
            printf("\nEntre com os valores para a coluna %d e linha %d : ", linha+1, col+1);
            scanf("%d", &matriz[linha][col]);
           
        }
    }
    
    //Matriz 4x4
    printf("\nResultado\n");
    for(linha=0; linha<4; linha++)
    {
        for(col=0; col<4; col++)
        {
            printf("%d\t", matriz[linha][col]);
        }
        printf("\n");
    }
    
    printf("\nDiagonal principal\n");
    for(linha=0; linha<4; linha++)
    {
        printf("%d\n", matriz[linha][linha]);
        
        for(tab=1;tab<=linha+1;tab++)
        {
            printf("\t");
        }
    }
    printf("\n");

    
    return 0;
}