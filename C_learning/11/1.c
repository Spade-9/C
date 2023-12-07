#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    float salary;
    printf("Enter your :");
    printf("$_______\b\b\b\b\b\b\b");
    scanf("%f", &salary);
    printf("\n\t$%.2f a month is $%.2f a year.", salary, salary * 12.0);
    printf("\rGee!\n");
    printf("      Gee!\n");

    system("pause");
    return 0;
}