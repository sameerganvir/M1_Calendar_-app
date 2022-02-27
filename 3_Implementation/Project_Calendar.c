#include <stdio.h>
#include "Project_Calender.h"
extern void printCalendar(int year);

int main()
{
	int year ;
	printf("Enter the Year :");
	scanf("%d",&year);
	printCalendar(year);
	return 0;
}