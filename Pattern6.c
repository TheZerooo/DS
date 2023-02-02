#include<stdio.h>
void main()
{
	int a,b,i,c,j,n;
	
	printf("Fibonnaci Triangle\n");
	
	printf("Enter Limit   ");
	scanf("%d",&n);   
	for(i=1;i<=5;i++)
	{ 
	     a=0;
	     b=1;
		printf("%d  ",b);
		for(j=1;j<i;j++)
		{
			c=a+b;
			printf("%d  ",c);
			a=b;
			b=c;
		}
		printf("\n");
	}
}
