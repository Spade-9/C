#include "calender.h"

int main()
{
    int year, month;
    printf("input the year and the month<YYYY-MM>:");
    scanf("%d-%d", &year, &month);
    printf("                  %d-%d                        \n", year, month);
    printf("Sun    Mon    Tue    Wed    Thu    Fri    Sat    \n");
    int day, day_of_month;
    day_of_month = GetMonthDays(year, month);
    for (day = 1; day <= day_of_month; day++)
    {
        int startDay;
        startDay = GetWeekDay(year, month, day);
        if (day == 1)
        {
            int j;
            for (j = 0; j < startDay; j++)
            {
                printf("       ");
            }
        }
        PrintMonthCalender(startDay, day);
    }

    return 0;
}