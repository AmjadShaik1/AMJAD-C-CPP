#include<iostream>
using namespace std;

int main()
{

    int m, n, i, j,k,sum=0, m1[50][10], m2[50][10],m3[50][10];
    cout <<"enter array dimensions: "<<endl;
    cin >>m>>n;
    cout <<" Enter m1 array elements: "<< endl;
     for (i = 0; i < m; i++)
    {
        for ( j = 0; j <n ; j++)
        {
        cin >> m1[i][j];
            /* code */
        }
    }
    cout <<" Enter m2 array elements: " ;
    for (i = 0; i < m; i++)
    {
        for ( j = 0; j <n ; j++)
        {
        cin >> m2[i][j];
            /* code */
        }
    }

    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            sum = 0;
             for (k = 0 ;k < n ;k++)
                sum = sum + m1[i][k] * m2[k][j] ;
                m3[i][j] = sum;
        }
    }
    cout <<" The product of two matrices is: \n";
      for (i = 0; i <m; i++)
    {
        for ( j = 0; j <n ; j++)
        {
        cout << " " <<m3[i][j];
            /* code */
        }
        cout <<"\n";
    }
    return 0;
}
