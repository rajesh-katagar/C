#include<stdio.h>

int lcm(int a, int b)
{
    int i = 1;
    while (i % a!= 0 || i % b!= 0)
    {
        i++;
    }
    return i;
}

int main()
{
    int a,b,res;
    printf("Enter two numbers\n");
    scanf("%d %d",&a,&b);

    res = lcm(a,b);

    printf("LCM of %d and %d is %d",a,b,res);

    return 0;
}