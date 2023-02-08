#include <stdio.h>
int main()
{
	int i,fact=1,num;
	printf("Enter the number");
	scanf("%d",&num);
	for (i=1;i<=num;i++)
	{
		fact=fact*i;
	}
	printf("Factorial oif %d is : %d",num,fact);
	return 0;
}
