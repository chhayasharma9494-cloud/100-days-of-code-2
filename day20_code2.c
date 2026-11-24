//Write a program to find the 1’s complement of a binary number and print it.
#include <stdio.h>

int main()
{
    long long n, temp, place = 1, complement = 0;
    int digit;

    printf("Enter a binary number: ");
    scanf("%lld", &n);

    temp = n;

    while(temp != 0)
    {
        digit = temp % 10;

        if(digit == 0)
            digit = 1;
        else
            digit = 0;

        complement = complement + digit * place;
        place = place * 10;
        temp = temp / 10;
    }

    printf("%0*lld", (int)(place > 1 ? 0 : 1), complement);

    return 0;
}