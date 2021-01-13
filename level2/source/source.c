#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int p(void)
{
  void *eip;
  char buffer[76];

  fflush(stdout);
  gets(buffer);
  if (((int)eip & 0xb0000000) == 0xb0000000)
  {
    printf("(%p)\n", eip);
    exit(1);
  }
  puts(buffer);
  strdup(buffer);
  return;
}

int main(void)
{
  p();
  return 0;
}
