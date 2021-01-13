#include <stdio.h>
#include <stdlib.h>

int g_var = 0;

void v(void)
{
    char buf[512];

    fgets(buf, 512, stdin);
    printf(buf);
    if (g_var == 64) {
        fwrite("Wait what?!\n", 1, 12, stdout);
        system("/bin/sh");
    }
}

int main(void)
{
    v();
    return 0;
}