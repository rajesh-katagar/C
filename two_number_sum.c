//write a function that takes in an non-empty array and returns a sum of two numbers which is equal to target
#include<stdio.h>

void sort(int arr[],int n)
{
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(arr[j] > arr[j+1])
            {
            temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            }
        }
    }
}

int two_number_sum(int arr[],int n,int target)
{
    int i,j;
    i=0;
    j=n-1;
    int static res[2]={0};
    sort(arr,n);
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    i=0;
    while (i<j)
    {
        if(arr[i] + arr[j] > target)
            j--;
        else if(arr[i] + arr[j] < target)
            i++;
        else
        {
            res[0] = arr[i];
            res[1] = arr[j];
            return res;
        }   
    }
    return NULL;
}

int main()
{
    int arr[] = {3,5,-4,8,11,-1,1-6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int target = 10;

    int *res = two_number_sum(arr,n,target);

    if(res!=NULL)
        printf("%d %d",res[0],res[1]);
    else
        printf("Target not found");

}