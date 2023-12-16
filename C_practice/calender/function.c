#include "calender.h"

int GetMonthDays(int year, int month)
{
    int day_of_month;
    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        day_of_month = 31;
        break;
    case 2:
        day_of_month = 28 + (((year / 4 == 0) && (year / 100 != 0)) || (year / 400 == 0));
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        day_of_month = 30;
    }
    return day_of_month;
}

int GetWeekDay(int year, int month, int day)
{
    int Day_of_formerYear = (year - 1) * 365 + (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400;
    int i, totalDay;
    totalDay = Day_of_formerYear;
    for (i = 1; i < month; i++)
    {
        totalDay += GetMonthDays(year, i);
    }
    totalDay += day;
    int week = totalDay % 7;
    return week;
}

void PrintMonthCalender(int startDay, int day)
{
    printf("%-7d", day);
    if (startDay == 6)
        printf("\n");
}