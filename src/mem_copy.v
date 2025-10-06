
#include "../include/mini_string.h"
#include <stdint.h>
#include <stddef.h>
/*void *my_memcpy(void *dest, const void *src, size_t n)
{
 unsigned char *d = dest;
 unsigned char *s = src;
//it is ismple iplementation which copies one byte at a time.
//we do that assuming the memory regions dont overlap otherwose there will be memory corruption and UB in edge cases.

 while(n--){

   *d++ = *s++;
   }
   return dest;
}*/

void *my_memcpy(void *d, const void *s, size_t n  )
{
  unit8_t *d = dest;
  const unit8_t *s =src;

  //copy 8 bytes at a time if possile
  while(n >= sizeof(uint64_t)){
    
    *(uint64_t *)d = *(const uint64_t *)s;
      
      d += sizeof(uint64_t);
      s += sizeof(uint64_t);
      n -= sizeof(uint64_t);

    }
    //now we copy the remaining bytes
    while(n--){ *d++ = *s++;}

    return dest;
      

}
//the above is faster than the first implementation above since it copies 4-8
//byters at a time while the latter copied byte-by-byte
