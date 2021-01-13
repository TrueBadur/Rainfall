#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char *global1 = 0;
char *global2 = 0;

int main(void)
{
    char str[128];

    do {
        printf("%p, %p \n", global1, global2);

        if (strncmp(str, "global1 ", 5) == 0) {
            global1 = (char *) malloc(4);
            char *global1Name = (str + 5);

            if (strlen(global1Name) < 32) {
                strcpy(global1, global1Name);
            }
        } else if (strncmp(str, "reset", 5) == 0) {
            if (global1) {
                free(global1);
            }
        } else if (strncmp(str, "global2", 7) == 0) {
            global2 = strdup(str + 7);
        } else if (strncmp(str, "login", 5) == 0) {
            if (*(global1 + 32) != 0) {
                system("/bin/sh");
            } else {
                fwrite("Password:\n", 1, 10, stdout);
            }
        }
    } while (fgets(str, 128, stdin));
    return 0;
}