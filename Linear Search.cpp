#include <stdio.h>
int main()
{
	int n,a[10],s;
	printf("Enter the Size of the Array:");
	scanf("%d",&n);
	printf("Enter the Array Elements:");
	for(int i=0;i<n;i++) scanf("%d",&a[i]);
	printf("Enter the Element to Search:");
	scanf("%d",&s);
	for(int i=0;i<n;i++)
	{
		if(a[i]==s)
		{
			printf("The Element is Found At %d Position!!",i+1);
			return 0;
		}
	}
	printf("Element Not Found!!");
}
