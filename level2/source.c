#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char 		*p(void)
{
	char	buff[64];
	void	*saved_eip;

	fflush(stdout);
	gets(buffer);
	saved_eip = __builtin_return_address(0);
	if ((saved_eip & 0xb0000000) == 0xb0000000)
	{
		printf("(%p)\n", saved_eip);
		exit(1);
	}
	puts(buff);
	return strdup(buff);
}

int			main(void)
{
	p();
	return 0;
}
