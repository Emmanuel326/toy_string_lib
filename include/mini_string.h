// include/mini_string.h
#ifndef MINI_STRING_H
#define MINI_STRING_H


#include <stddef.h> //for size_t

size_t my_strnlen(const char *s, size_t maxlen);
size_t my_strlcpy(char *des, const char *src, size_t size);
//char *my_strcpy(char *dest, const char *src);
//
//i will add two prototypes to  learn about memory
int my_strncmp(const char *s1, const char *s2, size_t n);
//i will add memcpy() here 
void *my_memcpy(void *dest, const void *src, size_t n  );// this assumes memory regions dont overlap otherwise you will get mem corruption


//we will add memmove operation which assures no data corruption.
//It manages this by 2 simple operattions,
//1. if  dest< src or no-overlapping , it copies from forward
//2. if dest > src and is overlapping then copy backward

void *my_memmove(void *dest, const void *src, size_t n);
// will continue

#endif 



