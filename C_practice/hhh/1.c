#include <stdio.h>
void print(long long i);
int judge(long long i);
int main()
{
    long long i;
    int n;
    scanf("%d", &n);
    for (int k = 1; k <= n; k++)
    {
        scanf("%lld", &i);
        print(i);
        printf("\n");
    }
    return 0;
}
int judge(long long i)
{
    for (long long j = 2; j * j <= i; j++)
    {
        if (i % j == 0)
        {
            return 1;
        }
    }
    return 0;
}
void print(long long i)
{
    int count = 0;
    long long j = 2;
    while (count == 0)
    {
        if (judge(j) == 1)
        {
            j++;
            continue;
        }
        if (i % j == 0)
        {
            printf("%lld", j);
            i = i / j;
            count++;
            break;
        }
        j++;
    }

    while (i > 1)
    {
        if (judge(j) == 1)
        {
            j++;
            continue;
        }
        if (i % j == 0)
        {
            printf(" %lld", j);
            i = i / j;
        }
        else
        {
            j++;
        }
    }
}