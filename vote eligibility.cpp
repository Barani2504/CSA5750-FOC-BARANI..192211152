#include <stdio.h>
int main()
{
	int age;
	printf("Enter your age : ");
	scanf("%d",&age);
	if (age>=18)
	{
		printf("The person is eligible to vote",age);
	}
	else
	{
		printf("The person need to wait for %d years to get eligibility to vote",18-age);
	}
	return 0;
}
