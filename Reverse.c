#include<stdio.h>
int main()
{
	int n,temp,r,sum=0,s;
	printf("Enter number\n");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=(sum*10)+r;
		n=n/10;
	}
	printf("Reverse number is \n%d",sum);
}
