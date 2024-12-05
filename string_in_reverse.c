#include<stdio.h>

void reverse(char s[],int i,int n)
{
    if(i >= n)
        return;
    reverse(s,i+1,n);
    printf("%c",s[i]);
}

int main()
{
    char a[] = "ABCD";
    int n = sizeof(a)/sizeof(a[0]);

    printf("%s \n",a);

    reverse(a,0,n);

    return 0;
}