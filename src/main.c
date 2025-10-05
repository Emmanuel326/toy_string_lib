#include <stdio.h> //this is for printf() functions
#include "../mini_string_lib/include/mini_string.h" //this is my [my_strnlrn declaration]


int main()
{
const char *s = "Hi there C veterans!! this is going to be fun";
size_t max = 50;

// call the string length function
size_t len = my_strnlen(str, max);

//print the output
printf("The length of the string is: %zu\n", len);
return 0;
}

