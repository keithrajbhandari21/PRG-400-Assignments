#include <string.h>

#ifdef __cplusplus
extern "C" {
#endif

// Fill a pre-allocated buffer with concatenated string
void concat_buffer(const char* a, const char* b, char* buffer, int buffer_len) {
    buffer[0] = '\0'; // ensure empty string
    if (a) strncat(buffer, a, buffer_len - 1);
    if (b) strncat(buffer, b, buffer_len - strlen(buffer) - 1);
}

#ifdef __cplusplus
}
#endif
