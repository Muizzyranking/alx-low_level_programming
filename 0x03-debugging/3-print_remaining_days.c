#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    int days_in_month[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int is_leap_year = 0;

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        // It's a leap year
        is_leap_year = 1;
    }

    if (month < 1 || month > 12 || day < 1 || day > days_in_month[month]) {
        printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
        return;
    }

    int remaining_days = 0;
    for (int i = month; i <= 12; i++) {
        if (i == month) {
            remaining_days += days_in_month[i] - day + 1;
        } else {
            remaining_days += days_in_month[i];
        }
    }

    if (is_leap_year && month <= 2) {
        remaining_days++; // Add an extra day for leap years before March
    }

    printf("Day of the year: %d\n", remaining_days);
    if (is_leap_year) {
        printf("Remaining days (Leap Year): %d\n", 366 - remaining_days);
    } else {
        printf("Remaining days (Non-Leap Year): %d\n", 365 - remaining_days);
    }
}
