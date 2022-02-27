#include <stdio.h>
#include "Project_Calender.h"
int numberOfDays(int monthNumber, int year)
{
	if (monthNumber == 1)
		return (31);

	if (monthNumber == 2) 
	{
		if (year % 400 == 0
			|| (year % 4 == 0
				&& year % 100 != 0))
			return (29);
		else
			return (28);
	}

	if (monthNumber == 3)
		return (31);

	if (monthNumber == 4)
		return (30);

	if (monthNumber == 5)
		return (31);

	if (monthNumber == 6)
		return (30);

	if (monthNumber == 7)
		return (31);

	if (monthNumber == 8)
		return (31);

	if (monthNumber == 9)
		return (30);

	if (monthNumber == 10)
		return (31);

	if (monthNumber == 11)
		return (30);

	if (monthNumber == 12)
		return (31);
}