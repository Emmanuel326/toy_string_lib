

#include "../include/mini_string.h"
#include <stddef.h>

// will implemet the memory movement almost similar to memmove from glibc
// i will use intrisi C as well
void *my_memmove(void *dest, const void *s, size_t n)
{
  unsigned char *d = (unsigned char *)dest;
  const unsigned char *s = (const unsigned char *)src;

  while(n--){
	

	  *d++=*s++;

   }
  return dest;  

}

void *my_memmove(void *dest, const void *s, size_t n)
{
  unsigned char *d = (unsigned char *)dest;
  const unsigned char *s = (const unsigned char *)src;

  if(d<s)
  {
	  //copy forward(like memcpy())
	  while(n--){*d++=*s++;}


  }else if (d > s)
  {
	  //copy backward
	  d += n;
	  s += n;
	  while(n--){*--d=*--s;}

  }
//if d = s nothing to do, (same memory)
return dest;
}


/* below is the implementation using intrisic c
 *
 *
 *
 * */
