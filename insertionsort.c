#include<stdio.h>

void insertion_sort(int arr[],int n)
{
    int i,j,key;

    for(i = 1; i < n; i++)
    {
        key = arr[i];
        j = i - 1;

        while (j>=0 && arr[j] > key)
        {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}


int main()
{
    int n;
    int arr[] = {23,1,10,5,2};

    n = sizeof(arr)/sizeof(arr[0]);

    insertion_sort(arr,n);

    for(int i = 0; i < n; i++)
        printf("%d ",arr[i]);

    return 0;
}