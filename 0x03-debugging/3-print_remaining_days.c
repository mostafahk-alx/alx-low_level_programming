#include <stdio.h>
#include "main.h"

/**
 * print_remaining_days - Takes a date and prints how many days are
 * left in the year, taking leap years into account
 * @month: Month in number format
 * @day: Day of month
 * @year: Year
 *
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		if (month >= 3 && day >= 60)  /* Leap year, after February */
		{
			day++;
		}
	}

	printf("Day of the year: %d\n", day);

	if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
	{
		printf("Remaining days: %d\n", 366 - day);
	}
	else
	{
		printf("Remaining days: %d\n", 365 - day);
	}
}

