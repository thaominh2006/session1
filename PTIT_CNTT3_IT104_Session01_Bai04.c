#include <stdio.h>

// Su dung vong lap for O(n)
int sumByFor(int n)
{
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += i;
    }
    return sum;
}
// Su dung cong thuc tinh tong cap so cong tu 1 -> n O(1)
int sumByRecipe(int n)
{
    return n * (n + 1) / 2;
}

int main()
{
    int n;
    // Nhap so nguyen tu nguoi dung
    printf("Nhap so nguyen duong n: ");
    scanf("%d", &n);
    // Goi ra hai cach tinh va in ra kqua cua chung
    int firstSum = sumByFor(n);
    int secondSum = sumByRecipe(n);
    printf("Tong day so khi su dung vong lap la: %d\n", firstSum);
    printf("Tong vong lap khi su dung cong thuc la: %d\n", secondSum);

    return 0;
}
