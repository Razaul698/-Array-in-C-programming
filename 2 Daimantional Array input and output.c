#include<stdio.h>
int main()
{
    int array[4][5];
    int i,j;

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("Array[%d][%d] = ",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<4; i++)
    {
        for(j=0; j<5; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }




    return 0;
}
