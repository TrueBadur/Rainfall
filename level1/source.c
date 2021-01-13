#include <stdlib.h>
#include <stdio.h>
void run() {
	fwrite("Good... Wait what?", 1, 19, stdout);
	system("/bin/sh");
}

int	main(void) {
	char s[76];

	gets(s);
	return 0;
}
