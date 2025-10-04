// src/mini_string.c

#include "../include/mini_string.h"

// this is the first basic implementation of  finding length
size_t my_strlen(const char *s) {
    // You can use a pointer to iterate and calculate the difference
    const char *p = s;
    while (*p != '\0') {
        p++;
    }
    // The difference between the end pointer and the start pointer is the length
    return (size_t)(p - s);
    
    /* Alternative, slightly simpler implementation:
    size_t count = 0;
    while (*s != '\0') {
        count++;
        s++;
    }
    return count;
    */
}
