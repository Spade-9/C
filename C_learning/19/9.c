#include <stdio.h>
int main()
{
    int n = 8;
    printf(" Initially, n = %d at %p\n", n, &n);
    for (int n = 1; n < 3; n++)
        printf(" loop 1: n = %d at %p\n", n, &n);
    printf("After loop 1, n = %d at %p\n", n, &n);

    return 0;
}