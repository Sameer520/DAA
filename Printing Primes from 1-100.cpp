#include <stdio.h>
int isprime(int a)
{
	for(int i=2;i<a;i++)
	{
		if(a%i==0) return 0;
	}
	return 1;
}
int main()
{
	printf("Primes from One to Hundred= ");
	for(int i=2;i<100;i++)
	{
		if(isprime(i)) printf("%d ",i);
	}
}
