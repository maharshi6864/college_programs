#include <stdio.h>

#define maxrow 5
#define maxcol 5

int main()
{
    int i, j, k;
    int matrix1[maxrow][maxcol], matrix2[maxrow][maxcol], product[maxrow][maxcol] = {0};
    int r, c;

    printf("enter rows:");
    scanf("%d", &r);
    printf("enter columns:");
    scanf("%d", &c);

    printf("enter value for matrix 1");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter value for position [%d][%d]=", i, j);
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("enter value for matrix 2");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter value for position [%d][%d]=", i, j);
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("matrix multiplication \n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            for (k = 0; k < r; k++)
            {
                product[i][j] += matrix1[i][k] * matrix2[k][j];
            }
            printf("%d ", product[i][j]);
        }
        printf("\n");
    }
}