#include<stdio.h>
int main()
{
    int num[]={3,20,40,56,1,30,48,6,45,26,53,33,12,65};
    int value;
    int i,position;

    printf("Enter Any Value : ");
    scanf("%d",&value);

    for(i=0;i<14;i++)
    {
        if(value==num[i])
        {
            position = i+1;
            break;
        }
    }

    if(position==-1)
    {
        printf("Item is Not Found");
    }
    else
    {
        printf("Item is Found");
    }

    return 0;
}
