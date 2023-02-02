#include<stdio.h>
int main()
{
	int arr[]={10,20,30,40,50,60};
	int *i,*j;
	i=&arr[1];
	j=&arr[5];
	printf("%d%d\n",j-i);
	return 0;
}
