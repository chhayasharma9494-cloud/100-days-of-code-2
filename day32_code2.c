//Find the digit that occurs the most times in an integer number.
#include <stdio.h>

int main() {
    long long num, temp;
    int freq[10] = {0};
    int digit, i, maxFreq = 0, maxDigit = 0;

    printf("Enter an integer: ");
    scanf("%lld", &num);

    // Handle negative numbers
    if (num < 0) {
        num = -num;
    }

    temp = num;

    // Count frequency of each digit
    if (temp == 0) {
        freq[0] = 1;
    } else {
        while (temp > 0) {
            digit = temp % 10;
            freq[digit]++;
            temp = temp / 10;
        }
    }

    // Find the digit with maximum frequency
    for (i = 0; i < 10; i++) {
        if (freq[i] > maxFreq) {
            maxFreq = freq[i];
            maxDigit = i;
        }
    }

    printf("Digit occurring the most times = %d\n", maxDigit);
    printf("Number of occurrences = %d\n", maxFreq);

    return 0;
}