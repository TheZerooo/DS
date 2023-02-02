#include<stdio.h>
int main()
{
    int a,b;
	printf("Values before swapping\na=");
	scanf("%d",&a);
    printf("b=");
	scanf("%d",&b);
	
       a=a+b;
	   b=a-b;
	   a=a-b;     
/*	   OR          
	   a=a*b;
	   b=a/b;
	   a=a/b;	   */
	
	printf("Values after swapping\na=%d\nb=%d",a,b);
	return 0;
}
