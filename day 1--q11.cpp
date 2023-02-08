#include <stdio.h>
int main()
{
	int i,n,sum=0,numbers;
	float average;
	printf("Enter the range of numbers (end limit) : ");
	scanf("%d",&n);
	printf("\n Enter the elements one by one : \n");
	for (i=0;i<n;i++)
	{
		scanf("%d",&numbers);
		sum+=numbers;
	}
	average=sum/n;
	printf("\nsum of the %d numbers = %d",n,sum);
	printf("\naverage of the %d numbers = %f",n,average);
	return 0;
}

