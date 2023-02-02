#include<stdio.h>
int fib(int);
void main()
{
	int i,n;
	printf("Enter no. of terms\n");
	scanf("%d",&n);
   
   	for(i=0;i<n;i++)       
	printf("  %d",fib(i));   
	getch();
}
int fib(int n)
{
	if(n==0||n==1)
	return n;
	else
	return(fib(n-1)+fib(n-2));
}
