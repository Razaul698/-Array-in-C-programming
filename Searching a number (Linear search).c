#include<stdio.h>
int main()
{


    int number[] = {10,3,4,23,45,34,543,54,323};
    int value;
    int position=-1;
    int i;

    printf("Enter Any Value = ");
    scanf("%d",&value);

    for(i=0; i<9; i++)
    {
        if(value==number[i])
        {
            position = i+1;
            break;
        }

    }
    if(position==-1)
    {
        printf("Item is not found");

    }
    else
        printf("Item is found");



    return 0;
}
