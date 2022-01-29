#include<iostream>

using namespace std;
int main()
{
  int a[15][10],n,i,j,max,min;
  cout <<"Enter size of array: ";
  cin >> n;
  cout <<"Enter array elements: ";
   for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
         cin >> a[i][j];
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
  cout <<" max element of array " << max;
  cout <<" min element of array " << min;
  
 return 0;

}