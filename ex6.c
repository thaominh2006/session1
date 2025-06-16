// Bước 1: Tạo mảng
//  Bước 1.1: Nhập sl ptu của mảng
//  Bước 1.2: Nhập gtri vào từng vị trí
//  => Đã có 1 mảng mới
// Bước 2: Nhập phần tử cần ktra
//  Kiểu số nguyên (int) => Dùng toán tử &, template %d
// Bước 3: Duyệt mảng
//  for -> Do đã biết trc số lần lặp
//  Tạo biến đếm số lần lặp của ptu (count)
//  cứ mỗi lần trùng, thì tăng count lên 1 đơn vị
// Bước 4: Trả về kqua
#include <stdio.h>

/**
 * @description Ham dem so lan xuat hien cua 1 ptu
 * @param array Mang can lap qua
 * @param arrayLength Do dai cua mang
 * @param elementCheck Phan tu can ktra
 * @return So lan xuat hien cua ptu
 */
int countExist(int array[], int arrayLength, int elementCheck){
    int count = 0;
    for(int i = 0; i < arrayLength; i++)
    {
        if(array[i] == elementCheck)
            count++;
        {

        }
    }
}
int main(){

    // Khai báo các biến cần thiết
    int element; // so luong ptu cua mang
    int elementCheck;

    // Hien ycau nhap
    printf("Nhap so luong phan tu cua mang: ");
    scanf("%d", &element);

    // Khai bao mang
    int array[element];

    // Nhap mang
    for (int i = 0; i < element; i++)
    {
        printf("Nhap phan tu thu %d: ", 1);
        scanf("%d", &array[i]);
    }

    // In mang
    for (int i = 0; i < element; i++)
    {
        printf("%d", array[i]);
    }
    printf("Nhap phan tu can ktra: ");
    scanf("%d", &elementCheck);

    // Goi ham so dem so lan xuat hien
    int result = countExist(array,element, elementCheck);
    printf("So lan xuat hien cua ptu %d la: %d", elementCheck, result);
    return 0;
}
// Do phuc tap cua thuat toan: time: