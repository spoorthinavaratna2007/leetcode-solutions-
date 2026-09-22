#include <stdio.h>

int binarySearch(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1;
}

int main()
{
    // Test Case 1
    int arr1[] = {1, 3, 5, 7, 9};
    int result1 = binarySearch(arr1, 5, 7);

    printf("Test Case 1: Index = %d\n", result1);

    // Test Case 2
    int arr2[] = {1, 3, 5, 7, 9};
    int result2 = binarySearch(arr2, 5, 4);

    printf("Test Case 2: Index = %d\n", result2);

    return 0;
}