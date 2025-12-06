#include<stdio.h>
int main()
{
    int original[3][3],i,j,uper=0,lower=0;

    printf("Enter the element for the matrix : ");
    printf("\n");

    //Original Input
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("Original[%d][%d] = ",i,j);
            scanf("%d",&original[i][j]);
        }
        printf("\n");
    }

    //Original Print
    printf("\nOriginal Matrix:\n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            printf("%d ",original[i][j]);
        }
        printf("\n");
    }

    //Lower And Uper Element
    for(i=0; i<3; i++)
    {
        for(j=0; j<3; j++)
        {
            if(i<j)
            {
                uper = uper + original [i][j];
            }

            if(i>j)
            {
                lower = lower + original [i][j];
            }

        }
    }

    printf("\nSumof Upper Element : %d\n", uper);
    printf("\nSumof Lower Element : %d\n", lower);


    return 0;
}
