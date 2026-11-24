//Find the first repeating lowercase alphabet in a string.
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int found = 0;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
// Only consider lowercase alphabets
        if (str[i] >= 'a' && str[i] <= 'z') {
// Check if this character repeats later in the string
            for (int j = i + 1; str[j] != '\0'; j++) {
                if (str[j] == str[i]) {
                    printf("First repeating character: %c\n", str[i]);
                    found = 1;
                    break;
                }
            }
        }
        if (found)
            break;
    }

    if (!found)
        printf("No repeating character found.\n");

    return 0;
}