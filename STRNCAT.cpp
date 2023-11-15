#include <iostream>
void myStrncat(char* destination, const char* source, size_t num) {

    while (*destination) {
        destination++;
    }
        while (*source && num--) {
        *destination++ = *source++;
    }

    *destination = '\0';

}
