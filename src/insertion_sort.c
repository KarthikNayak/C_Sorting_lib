#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "compare.h"

static void swap(char *a, char *b, unsigned width)
{
    char tmp;
    if(a != b)
    {
	while(width--)
	{
	    tmp = *a;
	    *a++ = *b;
	    *b++ = tmp;
	}
    }
}

void insertion_sort (void* base, size_t num, size_t width,int (*compar)(void*, void*))
{
        unsigned int i, j, k;
	char *ptr = base;

	if(num < 2 || width == 0)
	    return;

	for(i = 1; i <= num - 1; i++ )
	{
	    j = i;

	    while(j > 0 && compar((void *)(ptr + width * (j-1)), (void *)(ptr + width * j)) > 0)
	    {
		swap(ptr + width * (j-1), ptr + width * j, width);
		j--;
	    }

	}
}
