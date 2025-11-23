#include <stdlib.h>

static int *arr = NULL;
static int arr_size = 0;

void init_array(int size) {
    if (arr != NULL) {
        free(arr);
    }
    arr = (int *)malloc(sizeof(int) * size);
    arr_size = size;
}

void set_value(int index, int value) {
    if (arr != NULL && index >= 0 && index < arr_size) {
        arr[index] = value;
    }
}

int get_value(int index) {
    if (arr != NULL && index >= 0 && index < arr_size) {
        return arr[index];
    }
    return -1;
}

void free_array() {
    if (arr != NULL) {
        free(arr);
    }
    arr = NULL;
    arr_size = 0;
}
