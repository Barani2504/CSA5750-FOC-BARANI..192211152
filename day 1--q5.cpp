#include <stdio.h>
int main()
{
	int n,sum=0;
	printf("Enter the value of n :");
	scanf("%d",&n);
	for (int i=1;i<=n;i++)
	{
		printf("%d+",i);
		sum+=i;
	}
	printf("\b=%d",sum);
	return 0;
}
