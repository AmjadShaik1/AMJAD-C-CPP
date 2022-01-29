#include <stdio.h>

void main()
{

    int m, n, i, j,k,sum=0, m1[50][10], m2[50][10],m3[50][10];
    printf("enter array dimensions: ");
    scanf("%d%d", &m,&n);
    printf(" Enter m1 array elements: ");
     for (i = 0; i < m; i++)
    {
        for ( j = 0; j <n ; j++)
        {
        scanf("%d", &m1[i][j]);
            /* code */
        }
    }
    printf(" Enter m2 array elements: ") ;
    for (i = 0; i < m; i++)
    {
        for ( j = 0; j <n ; j++)
        {
        scanf("%d", &m2[i][j]);
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
    printf(" The product of two matrices is: \n");
      for (i = 0; i <m; i++)
    {
        for ( j = 0; j <n ; j++)
        {
        printf(" %d ", m3[i][j]);
            /* code */
        }
        printf("\n");
    }
}
