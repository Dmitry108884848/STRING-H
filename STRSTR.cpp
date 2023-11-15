#include <iostream>

const char* my_strstr(const char* haystack, const char* needle) {
    if (!haystack || !needle) {
        return nullptr;
    }

    for (int i = 0; haystack[i] != '\0'; i++) {
        int j = 0;
        while (needle[j] != '\0' && haystack[i + j] == needle[j]) {
            j++;
        }

        if (needle[j] == '\0') {
            return &haystack[i];
        }
    }

    return nullptr;
}

