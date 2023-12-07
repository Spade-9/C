#include <stdio.h>
int main()
{
    double a;
    char b[5];
    char c;
    // scanf("%6lf", &a);
    scanf("%s", b); // 注意：此处scanf读取数据到字符串中，会读取用户输入的整行，但只会将能装入数组的部分装入数组
    scanf("%c", &c); // 因而此处只能读进去一个换行符了
    return 0;
}