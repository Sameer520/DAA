#include <stdio.h>
int main()
{
	int a,sum=0;
	printf("Enter the Number:");
	scanf("%d",&a);
	while(a!=0)
	{
		sum+=a%10;
		a/=10;
	}
	printf("The Sum of Digits is %d",sum);
}