#include "minunit.h"
#include <compare.h>
#include <bubble_sort.h>

int a[] = {34, 23, 23, 2, 12, 35, 24, 54};
char cha[8][20] = {"eclair", "kitkat", "icecreamsandwich", "froyo", "gingerbread", "honeycomb", "donut", "cupcake"};
char *cha2[] = {"eclair", "kitkat", "icecreamsandwich", "froyo", "gingerbread", "honeycomb", "donut", "cupcake"};
int size_a = 8;

char *test_int(){
	int i = 0;
	
	bubble_sort(a, size_a, sizeof(int), compare_int);
	for(i = 1; i < size_a; i++)
	{
		mu_assert(!(a[i] < a[i-1]), "Not sorted Int");			
	}

	return NULL;
	
}

char *test_char(){
	int i = 0;

	bubble_sort(cha, size_a, 20, compare_string);
	for(i = 1; i < size_a; i++){
		mu_assert(!(strcmp(cha[i],cha[i-1]) < 0), "Not Sorted Char");			
	}

	return NULL;
}

char *test_char2(){
	int i = 0;

	bubble_sort(cha2, size_a, sizeof(char *), compare_stringv2);
	for(i = 1; i < size_a; i++){
		mu_assert(!(strcmp(cha[i],cha[i-1]) < 0), "Not Sorted Char");			
	}

	return NULL;
}

char *all_tests() {
        mu_suite_start();

        mu_run_test(test_int);
	mu_run_test(test_char);
	mu_run_test(test_char2);
	return NULL;
}

RUN_TESTS(all_tests);
