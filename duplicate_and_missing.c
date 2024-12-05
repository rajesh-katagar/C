#include <stdio.h>

void sort(int arr[], int n) {
    int temp;
    for(int i = 0; i < n-1; i++) {
        for(int j = 0; j < n-1-i; j++) {
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

void check_missing(int arr[], int n) {
    int arr1[n];
    int i, a = 0, b = 0;

    // Fill arr1 with numbers 1 to n
    for(i = 0; i < n; i++) {
        arr1[i] = i + 1;
    }

    sort(arr, n);
    sort(arr1, n);

    i = 0;
    while(i < n) {
        if(arr[i] != arr1[i]) {
            a = arr1[i];  // Missing number
            b = arr[i];   // Duplicate number
            break;
        }
        i++;
    }

    printf("A (Missing) = %d\n", a);
    printf("B (Duplicate) = %d\n", b);
}

int main() {
    int arr[] = {2, 2};
    int n = 2;

    check_missing(arr, n);

    return 0;
}
