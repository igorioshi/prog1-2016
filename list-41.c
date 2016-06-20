#include <stdio.h>

int menu()
{
    int opc;
    
    printf("\nEscolha uma opção: ");
    printf("\n1 - Diagonal principal");
    printf("\n2 - Diagonal secundaria");
    printf("\n0 - Fim");
    
    scanf("%d", &opc);
    
    return opc;
}

////////////////////////////////////////////



int main()
{
    int opc, linha, col, matriz[4][4], tab;
    
    opc = menu();
    
    for(linha=0; linha<4; linha++)
    {
        for(col=0; col<4; col++)
        {
            printf("\nEntre com os valores para a coluna %d e linha %d : ", linha+1, col+1);
            scanf("%d", &matriz[linha][col]);
           
        }
    }
////////////////////////////Matriz 4x4
    printf("\nResultado\n");
    for(linha=0; linha<4; linha++)
    {
        for(col=0; col<4; col++)
        {
            printf("%d\t", matriz[linha][col]);
        }
        printf("\n");
    }
    
    if(opc== 1)
    {
        printf("\nDiagonal principal\n");
        for(linha=0; linha<4; linha++)
        {
            printf("%d\n", matriz[linha][linha]);
            for(tab=1;tab<=linha+1;tab++)
            {
                printf("\t");
            }
        }
        
    }
    printf("\n");
    
    if(opc == 2)
    {
        printf("\nDiagonal secundaria\n");
        col= 3;
        for(linha=0; linha<4; linha++)
        {
           
            for(tab=1 ;tab<=col; tab++)
            {
                printf("\t");
            }
            printf("%d\n", matriz[linha][col]);
            
            col--;
        }
        
    }
    printf("\n");
    
    
    
    
    return 0;
}