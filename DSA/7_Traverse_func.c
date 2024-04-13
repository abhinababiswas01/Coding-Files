#include <stdio.h>

void printArray(int* a, int n) {
    for(int i = 0; i < n; i++) {
        printf("a[%d]: %d\n", i, a[i]);
    }
}

int main() {
    int a[] = {10, 34, 21, 78, 5};
    int n = sizeof(a) / sizeof(a[0]);

    printArray(a, n);

    return 0;
}