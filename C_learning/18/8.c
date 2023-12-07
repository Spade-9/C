#include <stdio.h>
int A(int n)
{
    if (n == 0)
        return 1;
    else
        return n * A(n - 1);
}

int main()
{
    int n = 0;
    scanf("%d", &n);
    int r = A(n);
    printf("%d", r);
    return 0;
}