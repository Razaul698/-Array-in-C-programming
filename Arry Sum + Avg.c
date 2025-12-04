#include<stdio.h>
int main()
{
	int num[5],sum=0,index,n;
	printf("Enter Any Number : ");
	scanf("%d", &n);

	for(index=0;index<n;index++)
	{
	scanf("%d",&num[index]);
	}

	for(index=0;index<n;index++)
	{
		sum =sum+num[index];
	}
	printf("Sum Number = %d\n",sum);
	printf("Avg Number = %.2f\n", (float)sum/n);


return 0;
}
