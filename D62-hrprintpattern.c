/*Day 62 - HackerRank:Print Pattern*/
#include <stdio.h>
#include <stdlib.h>

int* CopyString(int r, int n, int arr[2*n-1][2*n-1])
{
    int j;
    for(j=0;j<2*n-1;j++)
        arr[r][j]=arr[r-1][j];
    return arr[r];
}

int main() 
{

    int n,i,j;
      scanf("%d",&n);
      int arr[2*n-1][2*n-1];
      for(j=0;j<2*n-1;j++)
            arr[0][j]=n;
      for(i=0;i<n;i++)
      {
          if(i>0)
          {      
              CopyString(i,n,arr);
              for(j=i;j<(2*n-1)-i;j++)
                arr[i][j]=arr[i][j]-1;
          }
      }
      
      for(i=n;i<(2*n-1);i++)
          for(j=0;j<2*n-1;j++)
              arr[i][j]=arr[(2*n-1)-i-1][j];
      
      for(i=0;i<2*n-1;i++)
      {
        for(j=0;j<2*n-1;j++)
            printf("%d ",arr[i][j]);
        printf("\n");
      }
      return 0;
}