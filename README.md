## Synopsis

Lib containing most of the sorting techniques, written in C. And used for sorting any datatype.

## Code Example

void qsort (void* base, size_t num, size_t size,int (*compar)(const void*,const void*));
All Sort's will be in the standard C qsort synatx, where :
First Index(base) : Array Base
Second Index(num) : No of Elements
Third Index(size) : Size of each element
Fourth Index(compar) : a pointer to a Compare Function

## Motivation

After Failed attempts to find sorting techniques for all types of sorting for various datatypes. I have started this project to learn to develop and to compliment my education.

## Installation

Download Source using "git clone"
build lib using "make"
use the lib wherever req with header file inclusion

## Tests

The "make" command automatically tests the source
the tests folder contains all test files

## License

GPLv3 Licensing