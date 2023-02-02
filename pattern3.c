#include<stdio.h>
void main()
{ 
int i,j,k;
	for(i=1;i<=10;i=i+2)
	{
		for(k=9;k>=i;k--)
		{
			printf(" ");
		}
		
		for(j=1;j<=i;j++)
		{
			printf("%d ",j);
		}
		printf("\n");
    }
}
