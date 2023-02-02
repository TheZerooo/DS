#include<stdio.h>
int main(){
	int i,j,a[3][3],b[3][3],c[3][3];
	printf("Enter First Matrix\n");
	for(i=0;i<=2;i++)	
		for(j=0;j<=2;j++)		
			scanf("%d",&a[i][j]);			
	printf("Second Matrix is\n");
	for(i=0;i<=2;i++)		
		for(j=0;j<=2;j++)		
			scanf("%d",&b[i][j]);       
	
	printf("Sum of two matrix is\n ");
	for(i=0;i<=2;i++)	{
		for(j=0;j<=2;j++)	{
		c[i][j]=a[i][j]+b[i][j];
		printf("%d\t",c[i][j]);	}
	printf("\n");	}
	 }
