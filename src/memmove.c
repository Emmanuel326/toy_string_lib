#include "../include/mini_string.h"


void *my_memmove(void *d, const void *s, size_t n)
{
  unsigned char *d = (unsigned char *)dest;
  unsigned char *s = (unsigned char *)src;

  //we implement the mem copy way(the forward copying)
  if (d < s )
  { while (n--){
  *d++=s++;}

  }else if (d > s){
	  *d +=n;
	  *s +=n;
	  while(n--){

		  *--d=*--s;

	  }//if d = s then nothing to do (same memory)


  }
  


  return dest;
}


/*
 *
 *
 *below we are going to implement the same function  with word-by-word copy style in  c
 usinng  size_t
 
 *#include "../include/mini_string.h"
#include <stddef.h>
#include <stdint.h>


void *my_memmove(void *dest, const void *src, size_t n)
{
 unsigned char *d =( unsigned char *)dest;
 const unsigned char *s = (const unsigned char *)src;

 //forward copying.
 //align dest to word boundary
 if(d<s)
 {
   while(n && ((uintptr_t)d% sizeof(size_t)))
   {
    *d++= *s++;
    n--;
   }
 }

 //copy word by word
 size_t *dw = (size_t *)d;
 const size_t *sw = (const size_t *)s;

 while (n >= sizeof(size_t))
 {
   *dw++ = *sw++;
   n -= sizeof(size_t);
   
 }

 //copy remaining bytes if any
 d = (unsigned char *)dw;
 s = (unsigned char *)sw;

 while (n--){

 *d++=*s++ 

 }else if(d > s){
  //backward copy
  d +=n;
  s +=n;

  //allign to word boundary from end reversewards
  size_t *dw = (size_t *)d;
  const size_t *sw = (const size_t *)s;

  while (n >= sizeof(size_t)){
  *--dw = *--sw;
  n -= sizeof(size_t);

  }

  //copy remaining bytes if any
  d = (unsigned char *)dw;
  s = (const unsigned char *)sw;

  while (n--)
  {
   *--d =*--s;
  }
 }
return dest;

}
 *
 * */
