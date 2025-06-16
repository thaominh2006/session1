//
#include <stdio.h>

void printDouble(int n)
{
    int i = 1;
    while (i < n)
    {
        printf("%d\n", i);
        i *= 2;
    }
}
// Độ phức tạp cả thuật toán là: O(n) tại vì sử dụng vòng lặp while
