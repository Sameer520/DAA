#include <stdio.h>
#include <string.h>
int main()
{
	char a[10],b[10];
	printf("Enter the String:");
	scanf("%s",a);
	strcpy(b,a);
	printf("The String is Copied to the Destination:");
	printf("\nString in Destination=%s",b);
}