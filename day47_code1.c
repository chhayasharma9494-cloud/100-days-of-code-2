//check if two strings are anagrams of each other.
#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100];
    int count[256] = {0};
    int isAnagram = 1;

    printf("Enter first string: ");
    fgets(str1, sizeof(str1), stdin);
    printf("Enter second string: ");
    fgets(str2, sizeof(str2), stdin);

    // Lengths must match for strings to be anagrams
    if (strlen(str1) != strlen(str2)) {
        isAnagram = 0;
    } else {
// Count character occurrences in str1
        for (int i = 0; str1[i] != '\0'; i++)
            count[(unsigned char)str1[i]]++;

// Subtract character occurrences using str2
        for (int i = 0; str2[i] != '\0'; i++)
            count[(unsigned char)str2[i]]--;

// If any count is non-zero, not an anagram
        for (int i = 0; i < 256; i++) {
            if (count[i] != 0) {
                isAnagram = 0;
                break;
            }
        }
    }

    if (isAnagram)
        printf("The strings are anagrams.\n");

    return 0;
}