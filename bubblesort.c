#include<stdio.h>

void bubblesort(int arr[],int n)
{
    int i,j,temp,swapped;

    for(i=0;i<n;i++)
    {
        swapped = 0;

        for(j=0;j<n-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swapped = 1;
            }
        }
        if(swapped == 0)
            break;
    }
}

int main()
{
    int n;
    int arr[] = {65,25,12,22,11};

    n = sizeof(arr)/sizeof(arr[0]);

    bubblesort(arr,n);

    for(int i = 0; i < n; i++)
        printf("%d ",arr[i]);

    return 0;
}