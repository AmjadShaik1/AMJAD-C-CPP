#include<stdio.h>
#include<string.h>
void main()
{
    char str[150];
    char word [10];
    int i,j,flag,count=0,len1,len2;
    printf ("Enter a multiline String: ");
       gets(str);
    printf ("Enter a word to search: ");
       gets(word);
       len1 = strlen(str);
       len2 = strlen(word);

        for( i=0 ; i<= len1-len2;  i++)
    { 
               flag=1;  
                for( j=0 ;j<len2 ; j++)
                { 
                    if(str[i+j]!=word[j])
                        { 
                            flag=0;  
                             break;  
                        }
               }

 
         if(flag==1)
                       count++;
     
    }
    if(flag==0)
    printf("No Occurence ");
    else
    printf("%s found at %d times",word,count);
}

