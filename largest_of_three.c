#include<stdio.h>
#include<stdlib.h>

void three_largest(int arr[], int n)
{
    if(n < 0)
        exit(0);
    int first = -99999, second = -99999, third = -99999;
    for(int i = 0 ; i < n ; i++)
    {
        if( arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if( arr[i] > second )
        {
            third = second;
            second = arr[i];
        }
        else if( arr[i] > third )
        {
            third = arr[i];
        }
    }
    printf("[%d, %d, %d]",first, second, third);
}

int main()
{
    int arr[] = {141,1,17,-7,-17,-27,18,541,8,7,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    three_largest(arr,n);
    return 0;
}