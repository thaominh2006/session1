//
#include <stdio.h>
#include <stdlib.h>

int* mallocArray(int n)
{
    int* arr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++)
    {
        arr[i] = i;
    }
    return arr;
}
// Đôh phức tạp của thuật toán là O(n);