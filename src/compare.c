#include <stdlib.h>
#include <string.h>

int compare_int(void *a, void *b)
{
	int *c = (int *)a;
	int *d = (int *)b;
	return *c - *d;
}

int compare_string(void *a, void *b)
{
	char *c = (char *)a;
	char *d = (char *)b;
	return strcmp(c, d);
}

int compare_stringv2(void *a, void *b)
{
	char **c = a;
	char **d = b;
	return strcmp(*c, *d);
}
