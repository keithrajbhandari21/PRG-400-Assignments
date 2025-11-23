#include <ctype.h>
#include <stdlib.h>
#include <string.h>

char* shout(const char* s) {
    if (!s) return NULL;

    size_t n = strlen(s);
    char* result = (char*)malloc(n + 4);  // space for text + "!!!"

    for (size_t i = 0; i < n; i++) {
        result[i] = toupper((unsigned char)s[i]);
    }

    strcpy(result + n, "!!!");

    return result;
}
