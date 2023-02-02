#include<stdio.h>
int main()
{
	int n,sum,r;
	printf("Enter the number=");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	n=sum;
	
	while(n>0)
	{
		r=n%10;
		switch(r)
		{
			case 1:
				printf("One");
				break;
			case 2:
				printf("Two");
				break;
			case 3:
				printf("Three");
				break;
			case 4:
				printf("Four");
			    break;
			case 5:
				printf("Five");
				break;
			case 6:
				printf("Six");
				break;
			case 7:
				printf("Seven");
				break;
			case 8:
				printf("Eight");
				break;
			case 9:
				printf("Nine");
				break;
			
				default:
				printf("Zero");
				break;
		}
		n=n/10;
	}
	return 0;
}
