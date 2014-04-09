#ifndef bsort_h
#define bsort_h

typedef int (*b_compare)(void *a, void *b);
void bubble_sort (void* base, size_t num, size_t width,int (*compar)(void*, void*));

#endif
