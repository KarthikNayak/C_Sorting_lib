#ifndef insertion_h
#define insertion_h

typedef int (*b_compare)(void *a, void *b);
void insertion_sort (void* base, size_t num, size_t width,int (*compar)(void*, void*));

#endif
