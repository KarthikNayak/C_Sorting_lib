#include <stdlib.h>
#include <string.h>

int compare_int(const void *a, const void *b)
{
	int *c = (int *)a;
	int *d = (int *)b;
	return *c - *d;
}

int compare_string(const void *a, const void *b)
{
	const char *c = (char *)a;
	const char *d = (char *)b;
	return strcmp(c, d);
}

int compar_stringv2(const void *a, const void *b)
{
	const char **c = (char *)a;
	const char **d = (char *)b;
	return strcmp(c, d);
}
