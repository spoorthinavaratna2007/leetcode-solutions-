#include <stdio.h>

void twoSum(int arr[], int n, int target, int result[])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] + arr[j] == target)
            {
                result[0] = i;
                result[1] = j;
                return;
            }
        }
    }
}

int main()
{
    // Test Case 1: Typical case
    int arr1[] = {2, 7, 11, 15};
    int target1 = 9;
    int result1[2];

    twoSum(arr1, 4, target1, result1);

    printf("Test Case 1: [%d, %d]\n",
           result1[0], result1[1]);


    // Test Case 2: Edge case with duplicate values
    int arr2[] = {3, 3};
    int target2 = 6;
    int result2[2];

    twoSum(arr2, 2, target2, result2);

    printf("Test Case 2: [%d, %d]\n",
           result2[0], result2[1]);

    return 0;
}