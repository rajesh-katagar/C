#include<stdio.h>

void transpose(int r,int c,int a[r][c],int b[r][c])
{
    int i,j;

    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            b[i][j] = a[j][i];
}

int main()
{
    int r=4,c=3;
    int a[3][4]  = {{1,1,1,1},
                    {2,2,2,2},
                    {3,3,3,3}};
    int b[r][c],i,j;

    transpose(r,c,a,b);

      for(i=0;i<r;i++){
        for(j=0;j<c;j++)
            printf("%d ",b[i][j]);
        printf("\n");
      }
    return 0;
}