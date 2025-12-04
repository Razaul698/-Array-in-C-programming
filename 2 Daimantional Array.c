#include<stdio.h>
int main()
{
   int array[4][5] ={{1,2,3,4,5},{6,7,8,9,10},{11,12,13,14,15}

   };
    int i,k;

    for(i=0;i<4;i++)
    {
        for(k=0;k<5;k++)
        {
            printf("%d ", array[i][k]);
        }
        printf("\n");
    }


    return 0;
}
