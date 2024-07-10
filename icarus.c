#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char *data = getenv("QUERY_STRING");
  char action[30];
  sscanf(data,"action=%s", action);
  printf("Content-type: text/html\n\n");
  printf("<html><head></head>");
  printf("<body><h1>Hello, world!%s</h1></body>", action);
  printf("</html>");
  return 0;
}
