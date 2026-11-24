//Change the date format from dd/04/yyyy to dd-Apr-yyyy.
#include <stdio.h>

int main(void) {
    const char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                            "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
    int dd, mm, yyyy;

    printf("Enter date (dd/mm/yyyy): ");
    if (scanf("%d/%d/%d", &dd, &mm, &yyyy) != 3) {
        printf("Invalid input format.\n");
        return 1;
    }

    if (mm < 1 || mm > 12 || dd < 1 || dd > 31) {
        printf("Invalid date.\n");
        return 1;
    }

    printf("Converted date: %02d-%s-%04d\n", dd, months[mm - 1], yyyy);
    return 0;
}