#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

void bubble_sort (void* base, size_t num, size_t width,int (*compar)(void*, void*))
{
	int i,j,k;
	char *ptr = base;

	if(num < 2 || width == 0)
		return;

	for(i = num-1; i >= 0; i--)
	{
		for(j = 1; j <= i; j++)
		{
			k = compar((void *)(ptr + width * (j-1)), (void *)(ptr + width * j));

			if(k > 0)
			    swap(ptr + width * (j-1), ptr + width * j, width);
			
		}
	}
}
