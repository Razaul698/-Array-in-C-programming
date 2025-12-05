#include<stdio.h>

int main()
{
    int first[10][10], second[10][10], result[10][10];
    int i, j, k, row1, col1, row2, col2, sum;

    printf("Enter First Row And Column : ");
    scanf("%d %d", &row1, &col1);

    printf("Enter Second Row And Column : ");
    scanf("%d %d", &row2, &col2);

    while(col1 != row2)
    {
        printf("Error! Column of first matrix must equal row of second.\n");

        printf("Enter First Row And Column : ");
        scanf("%d %d", &row1, &col1);

        printf("Enter Second Row And Column : ");
        scanf("%d %d", &row2, &col2);
    }

    // First Matrix Input
    printf("\n\nFirst Matrix Input:\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("first[%d][%d] : ", i, j);
            scanf("%d", &first[i][j]);
        }
    }

    // Second Matrix Input
    printf("\n\nSecond Matrix Input:\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("second[%d][%d] : ", i, j);
            scanf("%d", &second[i][j]);
        }
    }

    // Matrix Multiplication
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
        {
            sum = 0;
            for(k=0; k<col1; k++)
            {
                sum += first[i][k] * second[k][j];
            }
            result[i][j] = sum;
        }
    }

    // First Matrix Output
    printf("\n\nFirst Matrix:\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("%d ", first[i][j]);
        }
        printf("\n");
    }

    // Second Matrix Output
    printf("\n\nSecond Matrix:\n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("%d ", second[i][j]);
        }
        printf("\n");
    }

    // Result Matrix Output
    printf("\n\nResult Matrix (Multiplication):\n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }

    return 0;
}
