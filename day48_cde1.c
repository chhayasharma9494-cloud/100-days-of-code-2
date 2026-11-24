//Check if one string is a rotation of another.
#include <stdio.h>
#include <string.h>
/*
  * Logic:
  * If str2 is a rotation of str1, then str2 must appear as a
  * contiguous substring inside (str1 + str1).
*/
int isRotation(char str1[], char str2[]) {
    int len1 = strlen(str1);
    int len2 = strlen(str2);

    // If lengths differ, one cannot be a rotation of the other
    if (len1 != len2) {
        return 0;
    }

    char temp[200];
    int i, j, k;

    for (i = 0; i < len1; i++) {
        temp[i] = str1[i];
    }

    for (i = 0; i < len1; i++) {
        temp[len1 + i] = str1[i];
    }
    temp[2 * len1] = '\0'; 

    int tempLen = 2 * len1;

    for (i = 0; i <= tempLen - len2; i++) {
        int matched = 1; 

        // Compare temp[i...i+len2-1] with str2[0...len2-1]
        for (j = 0; j < len2; j++) {
            if (temp[i + j] != str2[j]) {
                matched = 0;
                break;
            }
        }

        if (matched) {
            return 1;  // str2 found inside temp -> it's a rotation
        }
    }

    return 0;  // no match found -> not a rotation
}

int main() {
    char str1[100], str2[100];

    printf("Enter the first string: ");
    scanf("%s", str1);

    printf("Enter the second string: ");
    scanf("%s", str2);

    // Check rotation and display result
    if (isRotation(str1, str2)) {
        printf("\"%s\" is a rotation of \"%s\"\n", str2, str1);
    } else {
        printf("\"%s\" is NOT a rotation of \"%s\"\n", str2, str1);
    }

    return 0;
}