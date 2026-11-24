//Reverse each word in a sentence without changing the word order
#include <stdio.h>
#include <string.h>

int main() {
    char sentence[200];
    int i, start, end, temp;
    int len;

    printf("Enter a sentence: ");
    fgets(sentence, sizeof(sentence), stdin);

    len = strlen(sentence);
    start = 0;

    // Traverse the sentence character by character
    for (i = 0; i <= len; i++) {
        if (sentence[i] == ' ' || sentence[i] == '\0') {
            end = i - 1; 

            // Reverse the word from 'start' to 'end' in place
            while (start < end) {
                temp = sentence[start];
                sentence[start] = sentence[end];
                sentence[end] = temp;
                start++;
                end--;
            }

            start = i + 1;
        }
    }

    printf("Reversed words: %s\n", sentence);

    return 0;
}