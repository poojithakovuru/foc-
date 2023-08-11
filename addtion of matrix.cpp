#include <stdio.h>
#include <conio.h>
int main() 
{	
  int n,m,a[10][10],b[10][10],sum[10][10],i,j;
  printf("Enter the number of rows");
  scanf("%d",&n);
  printf("Enter the number of columns");
  scanf("%d",&m);
  printf("\nEnter the values:\n");
  for(i=0;i<n;i++)
    for(j=0;j<m;j++) 
	{
      printf("Enter element a%d%d:",i+1,j+1);
      scanf("%d",&a[i][j]);
    }
  printf("Enter the values:\n");
  for(i=0;i<n;i++)
    for(j=0;j<m;j++) 
	{
      printf("Enter element b%d%d:",i+1,j+1);
      scanf("%d",&b[i][j]);
    }
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
	 {
      sum[i][j]=a[i][j]+b[i][j];
    }
  printf("\nSum of two matrices:\n");
  for(i=0;i<n;i++)
    for(j=0;j<m;j++) 
	{
      printf("%d",sum[i][j]);
      if (j==m-1) 
	  {
        printf("\n");
      }
    }
  return 0;
}

