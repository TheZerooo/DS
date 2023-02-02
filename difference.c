include<stdio.h>
void create(int c[])
{
    int i,n;
    printf("enter the size of array which shouid be less than 11\n");
    scanf("%d",&n);
    c[0]=n;
    printf("enter the element of an array");
    for(i=1;i<=n;i++)
    scanf("%d",&c[i]);

}
int print(int c[])
{
  int n,i;
  n=c[0];
  printf("%d\n",c[i]);
}
int member(int set[],int x)
{
  int n,i;
  n=set[0];
  for(i=0;i<=n;i++)
  {
    if(set[i]==x)
    return 1;
  }
  return 0;
}

void difference(int s1[],int s2[],int s3[])
{
  int i,n;
  n=s1[0];
  s3[0]=0;
   for(i=0;i<=n;i++)
   {
    if(!member(s2,s1[i]))
    s3[++s3[0]]=s1[i];
   }
}


int main(){
  //  printf("hello world");

int a[10],b[10],c[10];
create(a);
print(a);
create(b);
print(b);
difference(a,b,c);
printf("the difference array  ");
}//C:\Users\DELL\Desktop\c program lab\difference.c
