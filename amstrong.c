#include <stdio.h>
#include<math.h>

void main()
{
    int n,count=0,c,rem,res=0,temp1,min,max;
    printf("enter a lower and upper limits\n");
    scanf("%d %d",&min,&max);
    printf("\n");
    for(n=min+1;n<=max;++n)
    {
       temp1=n;  
       while(temp1!=0)            //counting no.of digits
       {
        temp1=temp1/10;
        ++count;
       }
       c=count;
       temp1=n;
      while(temp1)
        {
           rem=temp1%10;
        
          temp1/=10;
         res=res+pow(rem,c);
        }
    
                n=temp1;
              if(res==n)
                {
                   printf("%d",n);
                }
            c=0;
            res=0;
    }
}