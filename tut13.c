#include<stdio.h>
void transpose();
int main(){
      int a[10][10],m,n,i,j;
      printf("\n TANU GIRI");
      printf("\n IT-C");
      printf("\n 2100320130180");
      printf("\n Enter the value of M,N:  ");
      scanf("%d %d",&m,&n);
      printf("\n Enter the elements of Matrix: \n");
      for(i=0;i<m;i++)
      {
          for(j=0;j<n;j++)
          {
              scanf("%d" ,&a[i][j]);
          }
     }
          printf("matrix is:\n");
      return 0;
    }
    void transpose(int x[10][10],int m,int n)
    {
        int y[n][m],i,j;
        printf("transpose is :\n");
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                y[i][j]=x[j][i];
                printf("%d" ,y[i][j]);
            }
            printf("\n");
        }
    }



