#include <stdio.h>
#include <math.h>
int main()
{
	int num,ori_num,rem,n=0,result=0;
	printf("Enter an integer :");
	scanf("%d",&num);
	ori_num=num;
	for (ori_num=num;ori_num!=0;n++)
	{
		ori_num/=10;
	}
	for (ori_num=num;ori_num!=0;ori_num/=10)
	{
		rem=ori_num%10;
		result+=pow(rem,n);
	}
	if ((int)result==num)
	{
		printf("%d is an armstrong number!!!",num);
	}
	else
	{
		printf("%d is not an armstrong number!!!",num);
	}
	return 0;
}
