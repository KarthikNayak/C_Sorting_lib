#ifndef bsort_h
#define bsort_h

typedef int (*b_compare)(const void *a, const void *b);
void bubble_sort (void* base, size_t num, size_t width,int (*compar)(const void*,const void*));
int compare_int(const void *a, const void *b);
int compare_string(const void *a, const void *b);

#endif
