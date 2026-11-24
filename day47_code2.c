//Find the longest word in a sentence
#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    char word[100], longest[100] = "";
    int len = 0;

    printf("Enter a sentence: ");
    fgets(str, sizeof(str), stdin);

    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] != ' ' && str[i] != '\n') {
            // Build the current word
            word[len] = str[i];
            len++;
        } else {
            // End of a word, terminate and compare
            word[len] = '\0';
            if (len > (int)strlen(longest))
                strcpy(longest, word);
            len = 0;
        }
    }

    printf("Longest word: %s\n", longest);

    return 0;
}