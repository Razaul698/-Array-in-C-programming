#include<stdio.h>
int main()
{
    int original[3][3],i,j,sum=0;

    printf("Enter the element for the matrix : ");
    printf("\n");

    //Original Input
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("Original[%d][%d] = ",i,j);
            scanf("%d",&original[i][j]);
        }
        printf("\n");
    }

    //Original Print
    printf("\nOriginal Matrix:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",original[i][j]);
        }
        printf("\n");
    }

    //Number of element
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
                sum = sum + original[i][j];
        }
    }
    printf("Sum Of Element = %d\n",sum);


    return 0;
}
