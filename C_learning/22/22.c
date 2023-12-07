#include <stdio.h>
struct hhh
{
    char name[10];
    int num1;
    int num2;
};
int main()
{
    struct hhh num;
    struct hhh *p = &num;
    // p->name[0] = "hhh";
    char name2[10];
    // *name2 = "hhh";
    p->num1 = 10;
    return 0;
}