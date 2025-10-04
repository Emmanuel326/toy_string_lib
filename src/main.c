#include <stdio.h>
#include "../include/mini_string.h"// this is my own header

int main(void)
{
  const char *test_str = "Hi C monks";
  size_t len = my_strlen(test_str);


  printf("String: \"%s\"\n", test_str);
  printf("Calculated length  (my_strlen): %zu\n", len);

  //the output should be 10 by the way 
  return 0;
}
