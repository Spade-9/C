#include <stdio.h>
void HUG(void);
int main()
{
    int b = Hug; // 编译时会出错，但写的时候不会报错
    // int b = 0;
    printf("%d", b);
    HUG();
    return 0;
}

int Hug = 10;

void HUG(void) // 注意：函数名和变量名不要一样了，会出事的
{
    int a = Hug * 2; // 外部变量Hug在此处可用
    printf("%d", a);
}