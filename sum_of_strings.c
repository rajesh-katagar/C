#include<stdio.h>

int main()
{
    int i=0,diff=0,res=0;
    char s[] = "23123124";

    while(s[i]!='\0')
    {
        diff = s[i] - 48;
        if(diff <= 9)
            res+=diff;
        i++;
    }
    printf("%d",res);
}