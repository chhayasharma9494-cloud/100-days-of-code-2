//Print initials of a name with the surname displayed in full.
#include <stdio.h>
#include <string.h>

int main() {
    char name[100];
    int i, len;
    int SurnameStart = -1; 

    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    len = strlen(name);

    for (i = 0; i < len; i++) {
        if (name[i] == ' ') {
            SurnameStart = i;
        }
    }

    printf("Result: ");

    if (name[0] != ' ') {
        printf("%c.", name[0]);
    }

    for (i = 1; i < SurnameStart; i++) {
        if (name[i] == ' ' && name[i + 1] != ' ') {
            printf("%c.", name[i + 1]);
        }
    }
    if (SurnameStart != -1) {
        printf(" %s", name + SurnameStart + 1);
    }

    printf("\n");

    return 0;
}