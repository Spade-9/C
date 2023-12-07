#include <stdio.h>
#include <stdlib.h>
float a = -2000.8;
float b = 2000.8;
int main()
{
    printf("*%9.1e*\n", a);
    printf("*%9.1e*\n", b);
    printf("*%f*\n", a);
    printf("*%.2f*\n", a);
    printf("*%3f*\n", a);
    printf("*%010.2f*\n", a);//前面的0，表示字段宽度足够长时以0补足
    printf("*%-10.2f*\n", a);
    printf("*%-10.0f*\n", a);
    printf("*%-10.0f*\n", b);
    printf("*%-10f*\n", b);

    system("pause");
    return 0;
}