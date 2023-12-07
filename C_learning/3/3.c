#include <stdio.h>
#define STLEN 4
int main(void)
{
    char words[STLEN];
    puts("Enter a string, please.");
    char *a = fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);

    puts("Enter another string, please.");
    char *b = fgets(words, STLEN, stdin);
    printf("Your string twice (puts(), then fputs()):\n");
    puts(words);
    fputs(words, stdout);
    puts("Done.");
    return 0;
}