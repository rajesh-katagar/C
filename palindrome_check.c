#include<stdio.h>
#include<string.h>

void check_palindrome(char n[])
{
    int l=0,h=strlen(n)-1;

    while(l<h)
    {
        if(n[l]!=n[h])
        {
            printf("%s is not palindrome\n",n);
            return;
        }
        h--;
        l++;
    }
    printf("%s is palindrome\n",n);
}

int main()
{
    char n1[] = "GADAG";
    char n2[] = "SDADASD";

    check_palindrome(n1);
    check_palindrome(n2);

}