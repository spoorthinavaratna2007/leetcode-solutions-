#include <stdio.h>
#include <string.h>

int isAnagram(char str1[], char str2[])
{
    int count[256] = {0};

    if (strlen(str1) != strlen(str2))
        return 0;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        count[(unsigned char)str1[i]]++;
        count[(unsigned char)str2[i]]--;
    }

    for (int i = 0; i < 256; i++)
    {
        if (count[i] != 0)
            return 0;
    }

    return 1;
}

int main()
{
    // Test Case 1: Typical case
    char str1[] = "anagram";
    char str2[] = "nagaram";

    if (isAnagram(str1, str2))
        printf("Test Case 1: Valid Anagram\n");
    else
        printf("Test Case 1: Not an Anagram\n");

    // Test Case 2: Edge case
    char str3[] = "rat";
    char str4[] = "car";

    if (isAnagram(str3, str4))
        printf("Test Case 2: Valid Anagram\n");
    else
        printf("Test Case 2: Not an Anagram\n");

    return 0;
}