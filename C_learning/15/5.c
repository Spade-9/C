#include <stdio.h>
int main()
{
    int i, a = 0, b = 0, c = 0, total = 0;
    scanf("%d", &i);
    while (i != 0)
    {
        if ((i % 3 == 0) && (i % 5 != 0) && (i % 7 != 0))
            a++;
        else if ((i % 3 != 0) && (i % 5 == 0) && (i % 7 != 0))
            b++;
        else if ((i % 3 != 0) && (i % 5 != 0) && (i % 7 == 0))
            c++;
        total++;
        scanf("%d", &i);
        if (i == 0)
            break;
    }
    double a1, b1, c1;
    a1 = 100 * a / total;
    b1 = 100 * b / total;
    c1 = 100 * c / total;
    printf("%.2lf%%\n", a1);
    printf("%.2lf%%\n", b1);
    printf("%.2lf%%\n", c1);
    return 0;
}