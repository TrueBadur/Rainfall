
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void			n(void)
{
	system("/bin/cat /home/user/level7/.pass");
}

void 			m(void)
{
	puts("Nope");
}

typedef void (*func_ptr_t)(void);

int				main(int argc, char **argv)
{
	char		*buffer1;
	char		*buffer2;
	func_ptr_t	func;

	buffer1 = malloc(64);
	buffer2 = malloc(4);

	*((unsigned long *)buffer2) = (unsigned long)m;
	strcpy(buffer1, argv[1]);
	buffer2();
	return 0;
}
