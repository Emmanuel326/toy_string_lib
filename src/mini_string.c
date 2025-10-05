//1. include the custome file for the declaration
//using a relative path

#include "../include/mini_string.h"

//2.below is the defination implementation of the function
size_t my_strnlen(const char *s, size_t maxlen)
{
  size_t length = 0;
  while (*s != '\0' && length < maxlen)
  {
	  length++;
	  s++;

  }
  return length;
}
