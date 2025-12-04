#include<stdio.h>
int main()
{
	int num[10],sum=0,i;

	printf("Enter Any Number : ");
	for(i=0;i<10;i++)
    {
        scanf("%d", &num[i]);
    }

    for(i=0;i<10;i++)
    {
        sum =sum+num[i];
    }
    printf("Sum Number : %d\n",sum);
    printf("Avg Number : %d\n",sum/10);

return 0;
}
