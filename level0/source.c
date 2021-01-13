#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    if (atoi(argv[1]) == 423) {
        char *call = strdup("/bin/sh");

        gid_t gid = getegid();
        uid_t uid = geteuid();

        setresgid(gid, gid, gid);
        setresuid(uid, uid, uid);

        execv("/bin/sh", "sh", 0);
    } else {
        fwrite("No !\n", 1, 5, stderr);
    }
}
