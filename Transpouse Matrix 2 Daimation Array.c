#include<stdio.h>

int main()
{
    int first[10][10], transpouse[10][10];
    int i, j, row, col;

    printf("Enter Row and Column : ");
    scanf("%d %d", &row, &col);

    // Input matrix
    printf("\nInput Matrix Values:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("first[%d][%d] : ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    // Transpose
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            transpouse[j][i] = first[i][j];
        }
    }

    // Output original matrix
    printf("\nOriginal Matrix:\n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }

    // Output Transpose matrix
    printf("\nTranspose Matrix:\n");
    for(i=0; i<col; i++)
    {
        for(j=0; j<row; j++)
        {
            printf("%d ", transpouse[i][j]);
        }
        printf("\n");
    }

    return 0;
}
