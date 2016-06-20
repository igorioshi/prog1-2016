#include <stdio.h>
int main()
{
    int lin,col,tab;
    int mat[4][4];
    for(lin=0;lin<=3;lin++)
    {
        for(col=0;col<=3;col++)
        {
        printf("Digite ELEMENTO da linha %d, coluna %d damatriz: ",lin+1,col+1);
//aqui no scanf preenchemos a matriz
        scanf("%d",&mat[lin][col]);
        }
    }
    printf("\n\nResultado:\n\n");
    for(lin=0;lin<=3;lin++)
    {
        printf("%d\n",mat[lin][lin]);
        for(tab=1;tab<=lin+1;tab++)
        {
            printf(" ");
        }
    }
    printf("\n\n");
    return 0;
}
