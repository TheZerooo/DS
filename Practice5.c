#include<stdio.h>
struct Ournode{
	char x,y,z;
};
int main()
{
	struct Ournode p={'I','O','a'+2};
	struct Ournode*q=&p;
	printf("%c,%c",*((char*)q+1),*((char*)q+2));
	return 0;
}
//You have to deal with ASCII value in this program.
