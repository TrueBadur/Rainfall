#include <stdlib.h>
#include <stdio.h>
#include <string.h>

char			g_buffer[69];

void 			m(void)
{
	printf("%s - %d\n", g_buffer, time(0));
}

int				main(int argc, char **argv)
{
	int			*buffer1;
	int			*buffer2;

	buffer1 = malloc(8);
	buffer1[0] = 0x1;
	buffer1[1] = malloc(8);

	buffer2 = malloc(8);
	buffer2[0] = 0x2;
	buffer2[1] = malloc(8);

	strcpy((char *)buffer1[1], argv[1]);
	strcpy((char *)buffer2[1], argv[2]);

	fgets(g_buffer, 68, fopen("/home/user/level8/.pass", "r"));
	puts("~~");
	
