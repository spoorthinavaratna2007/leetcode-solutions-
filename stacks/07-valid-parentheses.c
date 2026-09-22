#include <stdio.h>
#include <string.h>

int isValid(char str[])
{
    char stack[100];
    int top = -1;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        if (ch == '(' || ch == '[' || ch == '{')
        {
            top++;
            stack[top] = ch;
        }
        else
        {
            if (top == -1)
                return 0;

            char open = stack[top];
            top--;

            if ((ch == ')' && open != '(') ||
                (ch == ']' && open != '[') ||
                (ch == '}' && open != '{'))
            {
                return 0;
            }
        }
    }

    return top == -1;
}

int main()
{
    // Test Case 1
    char str1[] = "()[]{}";

    if (isValid(str1))
        printf("Test Case 1: Valid\n");
    else
        printf("Test Case 1: Invalid\n");

    // Test Case 2
    char str2[] = "(]";

    if (isValid(str2))
        printf("Test Case 2: Valid\n");
    else
        printf("Test Case 2: Invalid\n");

    return 0;
}