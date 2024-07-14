#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
  char *data = getenv("QUERY_STRING");
  char action[100];
  sscanf(data,"action=%s", action);
  printf("Content-type: text\n\n");
  if (strcmp(action, "enableguest") == 0) {
	printf("1");
  } else {
	printf("0");
  }
  return 0;
}
