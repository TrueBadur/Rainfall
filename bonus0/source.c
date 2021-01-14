#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char				*p(char *to_fill)
{
//allocates 0x1018 on stack 4120 bytes
	char			buffer[4096];

	puts(" - ");
	read(0, buffer, 4096);
	*strchr(buffer, '\n') = '\0';
	return strncpy(to_fill, buffer, 20);
}

char				*pp(char *buffer)
{
//allcates 0x50 on stack
	unsigned int	len;
	char			buffer1[20];
	char			buffer2[20];

	p(buffer1);
	p(buffer2);

	strcpy(buffer, buffer1);

	len = strlen(buffer);
	buffer[len] = ' ';
	buffer[len + 1] = '\0';

	return strcat(buffer, buffer2);
}

int					main(void)
{
//allocates 0x40 on stack
	char			buffer[42];

	
	puts(pp(buffer));
	return 0;
}
