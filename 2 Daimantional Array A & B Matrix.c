#include<stdio.h>
int main()
{
    int array[2][3];
    int i,j;
    printf("A MAtrix Start\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Array[%d][%d] = ",i,j);
            scanf("%d",&array[i][j]);
        }
        printf("\n");
    }
    printf("A = ");
    for(i=0; i<2; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    //Matric B for Array

    int arrayb[2][3];


    printf("\n\nB Matrix Start.\n");
    for(i=0; i<2; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Array[%d][%d] = ",i,j);
            scanf("%d",&arrayb[i][j]);
        }
        printf("\n");

    }
    printf("B = ");
    for(i=0; i<2; i++)
    {
        printf("\t");
        for(j=0; j<3; j++)
        {
            printf("%d ",arrayb[i][j]);
        }
        printf("\n");
    }




    return 0;
}
