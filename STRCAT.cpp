
#include <iostream>

char* strcat(char* dest, const char* src) {
    char* ptr = dest;

    while (*ptr) {
        ptr++;
    }

    while (*src) {
        *ptr++ = *src++;
    }

    *ptr = '\0';

    return dest;
}
Стрлен

#include <iostream>

size_t* strlen(char* str) {
    size_t result = 0;
    for (size_t i = 0; str[i] i= '\n' || str[i] i= '\0'; i++)
    result++
    return result;
    
}
