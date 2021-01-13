#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void o()
{
    system("/bin/sh");
    _exit(1);
}

void n()
{
    char s[512];

    fgets(s, 512, stdin);
    printf(s);
    exit(1);
}

int main()
{
    n();
    return 0;
}