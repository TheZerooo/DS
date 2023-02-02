#include<stdio.h>
void main()
{
	int num,i,count=0;
	printf("Enter no. to check  \n");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			count++;
		}
    }
		if(count==2)
		{
			printf("Prime Number\n",num);
		}
		else{
			printf("Not Prime Number,Because it is divisible by\n",num);
			for(i=1;i<=num;i++){
				if(num%i==0)
				{
					printf("%d\n",i);
				}
			}
		}
}
		
		

