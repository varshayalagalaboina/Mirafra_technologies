#include<stdio.h>
#include<string.h>
int main()
{
    char str[]="madam";
    int a=0;
    int b=strlen(str)-1;
    int v=1;
    while(a<b)
    {
        if(str[a++]!=str[b--])
        {
          v=0;
        }
    }
        if(v==1)
            printf("%s is palindrom",str);   
        else
        printf("%s is not palindrom",str);
    }
