#include <stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
}
int mul(int a,int b)
{
	return a*b;
}
void init(int a[2][2])
{
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++) scanf("%d",&a[i][j]);
	}
}
int main()
{
	int a[2][2],b[2][2],c[2][2];
	printf("Enter A-Matrix:\n");
	init(a);
	printf("Enter B-Matrix\n");
	init(b);
	int p=mul(add(a[0][0],a[1][1]),add(b[0][0],b[1][1]));
	int q=mul(add(a[1][0],a[1][1]),b[0][0]);
	int r=mul(sub(b[0][1],b[1][1]),a[0][0]);
	int s=mul(sub(b[1][0],b[0][0]),a[1][1]);
	int t=mul(add(a[0][0],a[0][1]),b[1][1]);
	int u=mul(sub(a[1][0],a[0][0]),add(b[0][0],b[0][1]));
	int v=mul(sub(a[0][1],a[1][1]),add(b[1][1],b[1][0]));
	c[0][0]=p+s-t+v;
	c[0][1]=r+t;
	c[1][0]=q+s;
	c[1][1]=p+r-q+u;
	printf("Resultant Matrix\n");
	for(int i=0;i<2;i++)
	{
		for(int j=0;j<2;j++) printf("%d ",c[i][j]);
		printf("\n");
	}
}
