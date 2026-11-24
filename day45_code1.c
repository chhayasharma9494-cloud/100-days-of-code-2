//Count frequency of a given character in a string.
#include <stdio.h>
#include<string.h>

int main() {
    char str[100], temp;
    int count = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter character to count: ");
    scanf("%c", &temp);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == temp)
            count++;
    }

    printf("Frequency of '%c': %d\n", temp, count);

    return 0;
}