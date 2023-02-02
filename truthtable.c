#include<stdio.h>
void main()
{
	int a,b,temp,i;
	printf("\A  B  A.B  A+B  A'  B' (A+B)' (A.B)'\n");
	printf("\n\t 1.AND\n\t 2.OR\n\t  3.NOT\n\t 4.NOR\n\t  5.NAND\n\t 6.XOR\n\t 7.");
	do
	{
		printf("\n Enter the choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
				{
					push();
					break;
				}
				case 2:
					{
						pop();
						break;
					}
					case 3:
						{
							peek();
							printf("element of the top of stack:%d\n",peek());
							break;
						}
					case 4:
					{
						display();
						break;
					}
					case 5:
						{
							printf("\n\t EXIT POINT");
							break;
						}
	for(i=0;i<4;i++)
	{
		temp=i;
		a=i%2;
		temp=temp/2;
		b=temp%2;
		printf("\n%d  %d  %d  %d  %d  %d  %d  %d\n",b,a,a&&b,a||b,!b,!a,!(b+a),!(b&&a));
	}
}
