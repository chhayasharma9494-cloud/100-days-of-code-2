//Check if a string is a palindrome.
#include <stdio.h>
#include <string.h>

int main()
{
    char str[100], reverse[100];

    printf("Enter a string: ");
    scanf("%99s", str);

    strcpy(reverse, str);

    int i = 0;
    int j = strlen(reverse) - 1;

    while (i < j)
    {
        char temp = reverse[i];
        reverse[i] = reverse[j];
        reverse[j] = temp;

        i++;
        j--;
    }

    if (strcmp(str, reverse) == 0)
        printf("Palindrome");
    else
        printf("Not a palindrome");

    return 0;
}