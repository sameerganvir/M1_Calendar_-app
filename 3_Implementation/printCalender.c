#include <stdio.h>
#include "Project_Calender.h"
void printCalendar(int year)
{
	//printf("	 Calendar - %d\n\n", year);
	int days;
    int mon;
    printf("Ente the number of the month : ");
    scanf("%d",&mon);
    int current = dayNumber(1, mon, year);
	days = numberOfDays(mon, year);

	printf("\n ------------%s-------------\n",getMonthName(mon));

	printf("  Sun  Mon  Tue  Wed  Thu  Fri  Sat\n");

	int k;
	for (k = 0; k < current; k++)
		printf("     ");

	for (int j = 1; j <= days; j++)
	{
		printf("%5d", j);

		if (++k > 6) {
			k = 0;
			printf("\n");
		}
	}
		
	if (k)
		printf("\n");

	current = k;
	
	return;
}
