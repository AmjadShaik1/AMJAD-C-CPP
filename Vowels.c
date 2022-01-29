#include<stdio.h>
void main()
{
     char s[15];
     
        printf("enter a string:");
         gets(s);
        int i=0 ;
        printf("Vowels in the given string are: ");
    while(s[i]!='\0')
    {
         if (s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'||  s[i]=='O'|| s[i]=='U')

               printf(" %c ",s[i]);  
        i++ ; 
    }
   
}
