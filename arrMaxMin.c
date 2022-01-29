#include<stdio.h>
void main()
{
  int a[15][10],n,i,j,max,min;
  printf("Enter size of array: ");
  scanf("%d",&n);
  printf("Enter array elements: ");
   for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
         scanf("%d",&a[i][j]);
    }
max=min=a[0][0];  
for(i=0 ; i<n ; i++)
  {
    for(j=0;j<n ;j++)
    {  if(a[i][j]>max)
         max=a[i][j];  
      if(a[i][j]<min)
         min=a[i][j]; 
       }
  }
  printf(" max element of array:%d ",max);
  printf(" min element of array:%d ",min);
  



}