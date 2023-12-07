#include <stdio.h>
#define STLEN 5
int main(void)
{
    char words[STLEN];
    puts("Enter strings (empty line to quit):");
    char *a;
    while ((a = fgets(words, STLEN, stdin)) != NULL && words[0] != '\n')
        fputs(words, stdout);
    puts("Done.");
    return 0;
}