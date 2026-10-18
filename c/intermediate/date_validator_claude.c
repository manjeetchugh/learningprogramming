```c
#include <stdio.h>

int main(void)
{
    // Stores the chosen format: A, B, or I
    char pref;

    // Stores the date entered by the user
    int dd, mm, year;

    // Stores the maximum number of days in the entered month
    int max_days;

    // Will be 1 if the year is a leap year, otherwise 0
    int leap_year;

    // Ask which format the user wants
    printf("Choose a format: DD-MM-YYYY (A), MM-DD-YYYY (B), "
           "or YYYY-MM-DD (I):\n");

    // Read the format choice.
    // The leading space skips any leftover whitespace, such as a newline.
    if (scanf(" %c", &pref) != 1) {
        printf("Invalid input.\n");
        return 1; // Stop because the input could not be read
    }

    // Ask for the date
    printf("Enter day, month, and year: ");

    // Read the date as three numbers, for example: 29 2 2024
    // scanf returns the number of values it successfully read
    if (scanf("%d %d %d", &dd, &mm, &year) != 3) {
        printf("Invalid date input.\n");
        return 1;
    }

    // Check that the format choice is A, B, or I (uppercase or lowercase)
    if (pref != 'A' && pref != 'a' &&
        pref != 'B' && pref != 'b' &&
        pref != 'I' && pref != 'i') {
        printf("Invalid format choice.\n");
        return 1;
    }

    // Check the basic date limits
    if (year < 1 || year > 9999 || mm < 1 || mm > 12 || dd < 1) {
        printf("Invalid date.\n");
        return 1;
    }

    // A year is a leap year if:
    // - it is divisible by 400, OR
    // - it is divisible by 4 but not by 100
    leap_year = (year % 400 == 0) ||
                (year % 4 == 0 && year % 100 != 0);

    // Find the maximum number of days in the entered month
    switch (mm) {
        case 2:
            // February has 29 days in a leap year, otherwise 28
            max_days = leap_year ? 29 : 28;
            break;

        case 4:
        case 6:
        case 9:
        case 11:
            // April, June, September, and November have 30 days
            max_days = 30;
            break;

        default:
            // All other months have 31 days
            max_days = 31;
    }

    // Check that the day exists in the entered month
    // For example, this rejects April 31
    if (dd > max_days) {
        printf("Invalid date.\n");
        return 1;
    }

    // Print the valid date in the format the user chose
    switch (pref) {
        case 'A':
        case 'a':
            // DD-MM-YYYY; %02d adds a leading zero if needed
            printf("%02d-%02d-%04d is a valid date (DD-MM-YYYY).\n",
                   dd, mm, year);
            break;

        case 'B':
        case 'b':
            // MM-DD-YYYY
            printf("%02d-%02d-%04d is a valid date (MM-DD-YYYY).\n",
                   mm, dd, year);
            break;

        case 'I':
        case 'i':
            // YYYY-MM-DD; %04d prints the year with four digits
            printf("%04d-%02d-%02d is a valid date (YYYY-MM-DD).\n",
                   year, mm, dd);
            break;
    }

    return 0; // 0 means the program finished successfully
}
```
