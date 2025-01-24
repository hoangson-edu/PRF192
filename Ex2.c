#include<stdio.h>

int main(){
    char character;
    int ascll;

    //  a. Nhập vào một ký tự và in ra mã ASCII tương ứng với ký tự đó.
    printf("Nhap ky tu: ");
    scanf("%c", &character);
    printf("'%c' co ma ASCII tuong ung la '%d'\n", character, (int)character);

    //  b. Nhập vào một số nguyên (1 → 255) và in ra ký tự có mã ASCII
    // lập trình c
    printf("Nhap ma ASCII: ");
    scanf("%d", &ascll);
    printf("'%d' co ki tu la: '%c'", ascll, (char)ascll);

    return 0;
}