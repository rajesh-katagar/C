#include<stdio.h>

int prime(int n)
{
    int i = 2, status = 0;
    while(i<n)
    {
        if(n%i==0)
        {
            status = 1;
            break;
        }
        i++;
    }
    return status;
}

int main()
{
    int res,n;
    printf("Enter a number\n");
    scanf("%d",&n);

    res = prime(n);
    if(res == 0)
    {
        printf("%d is a prime number",n);
    }
    else
    {
        printf("%d is not a prime number",n);
    }
    return 0; 
}