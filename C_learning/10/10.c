#include <stdio.h>

void ROW(int c)
{
    printf("|");
    int i;
    for (i = 0; i < c; i++)
        printf("*****|");
    printf("\n|");
    for (i = 0; i < c; i++)
        printf("  |  |");
    printf("\n|");
    for (i = 0; i < c; i++)
        printf("--+--|");
    printf("\n|");
    for (i = 0; i < c; i++)
        printf("  |  |");
    printf("\n");
}
