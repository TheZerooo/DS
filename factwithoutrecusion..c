#include<stdio.h>
#include<conio.h>                                   /* likho ya mt likho koi frk nhi pdta hai*/
int factorial(int a);
int main()                                          /*    ; ye wala symbol main() mei nhi aata hai */
{
	int a,fact;                                  /* a jo hm denge fact jo o/p aayega*/
	printf("Enter any number");
	scanf("%d",&a);
	
	fact=factorial(a);
	printf("Factorial value=%d\n",fact);
	return 0;
}
int factorial(int x)                            /*( yha ka int x output ki value ko show kr rha hai)*/
    
	
/*	FACTORIAL WITHOUT RECURSION  */               
{	
int f=1,i;
for(i=x;i>=1;i--)
f=f*i;
return(f);	
}

