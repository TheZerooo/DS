#include<stdio.h>
int main()
{
	int n,f=1,i;
	printf("Enter number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("Factorial is %d",f);
}
