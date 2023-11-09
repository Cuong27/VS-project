#include<stdio.h>

int main() {
    int a, b;
    char c;
     printf("Nhap 2 so a,b va phep toan");
      fflush(stdin);
    scanf("%d%d %c", &a, &b, &c);
    switch (c) { 
        case '+' :
        printf("Tong 2 so la = %d", a+b);
        break;
        case '-' :
        printf("Hieu 2 so la = %d", a-b);
        break;
        case '*' :
        printf("Tich 2 so la = %d",  a*b);
        break;
        case '/' :
        printf("Thuong 2 so la = %.2f", (float)a/b);
        break;
        default :
        printf("phep tinh ko hop le");
    }
}