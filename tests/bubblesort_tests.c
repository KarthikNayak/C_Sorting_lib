#include "minunit.h"
#include <bubble_sort.h>

int a[] = {34, 23, 23, 2, 12, 35, 24, 54};
int size_a = 8;

char *test_int(){
	int i = 0;
	
	bubble_sort(a, size_a, sizeof(int), compare_int);
	for(i = 1; i < size_a; i++)
	{
		if( a[i] < a[i-1])
			return 1;
	}

	return NULL;
	
}

char *all_tests() {
    mu_suite_start();

    mu_run_test(test_int);
	return NULL;
}

RUN_TESTS(all_tests);
