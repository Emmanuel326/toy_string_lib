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

// will continue

#endif



