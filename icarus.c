#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    char *data = getenv("QUERY_STRING");
    char action[100];
    int error = 0;
    int success = 0;
    sscanf(data,"action=%s", action);
    printf("Content-type: text\n\n");
    if (strcmp(action, "enableguest") == 0) {
	error = system("guest_wifi enable");
    } else if (strcmp(action, "disableguest") == 0) {
	error = system("guest_wifi disable");
    } else {
	error = 1;
    }

    if (error == 0) {
	success = 1;
    }
    printf("%d", success);
}
