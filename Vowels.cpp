#include<iostream>
using namespace std;
int main()
{
     char s[15];
     
        cout << "enter a string:";
         gets(s);
        int i=0 ;
        cout <<"Vowels in the given string are: ";
    while(s[i]!='\0')
    {
         if (s[i]=='a' || s[i]=='e' || s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| s[i]=='A'|| s[i]=='E'|| s[i]=='I'||  s[i]=='O'|| s[i]=='U')

               cout << s[i]<<" " ;  
        i++ ; 
    }
   return 0;
}
