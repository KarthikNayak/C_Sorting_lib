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

void selection_sort (void* base, size_t num, size_t width, int (*compar)(void*, void*))
{
    unsigned int i, j, min;
    char *ptr = base;

    if(num < 2 || width == 0)
	return;
    
    for(i = 0; i < num - 1; i++)
    {
	min = i;
	for(j = i + 1; j < num; j++)
	{
	    if(compar((void *)(ptr + width * j), (void *)(ptr + width * min)) < 0)
		min = j;
		
	}
	swap(ptr + width * min, ptr + width * i, width);
    }
}
