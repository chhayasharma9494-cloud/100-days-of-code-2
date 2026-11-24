//Print all sub-strings of a string.
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[100];

    printf("Enter a string: ");
    if (fgets(str, sizeof(str), stdin) == NULL) {
        printf("Input error.\n");
        return 1;
    }

    str[strcspn(str, "\n")] = '\0';

    int len = strlen(str);
    int first = 1;  

    printf("Substrings: ");

    for (int start = 0; start < len; start++) {      
        for (int end = start; end < len; end++) {      

            if (!first) {
                putchar(' ');
            }
            first = 0;

            // Print characters from 'start' to 'end'
            for (int k = start; k <= end; k++) {
                putchar(str[k]);
            }
        }
    }

    return 0;  
}