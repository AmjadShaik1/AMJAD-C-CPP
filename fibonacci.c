#include<stdio.h>

void main()
{
    int n1=0,n2=1,n3,m;
    printf("enter number of m");
    scanf("%d",&m);
    printf("%d %d ",n1,n2);
    for (int i = 2; i<m;++i)
    {
        n3=n1+n2;
        printf("%d ",n3);
        n1=n2;
        n2=n3;
    }
    
}