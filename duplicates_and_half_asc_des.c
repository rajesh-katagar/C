#include <stdio.h>

void sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)  // Loop until n-1
    {
        for (int j = 0; j < n - 1 - i; j++)  // Loop until n-1-i to avoid out of bounds
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void half_des_asc(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)  // Loop until n-1
    {
        for (int j = 0; j < n - 1 - i; j++)  // Loop until n-1-i to avoid out of bounds
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    
    for(int i=0;i<n/2;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
    for(int i=n-1;i>=n/2;i--)
    {
        printf("%d ",arr[i]);
    }
}

void duplicates(int arr[], int n)
{
    sort(arr, n);
    
    printf("Duplicate elements: ");
    int status = 0;  // Flag to check if there are duplicates

    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] == arr[i + 1])
        {
            if (i == 0 || arr[i] != arr[i - 1])  // Print only if it's the first time this duplicate is found
            {
                printf("%d ", arr[i]);
                status = 1;
            }
        }
    }

    if (!status)
    {
        printf("None");
    }
    printf("\n");
}

int main()
{
    int arr[] = {0, 0, 1, 0, 2, 6, 3, 4, 4, 5, 6};
    int length = sizeof(arr) / sizeof(arr[0]);

    duplicates(arr, length);
    half_des_asc(arr,length);
    return 0;
    
}
