#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
		int a, b, c, d;
	printf("nhap gia tri cua a,b,c:");
	scanf("%d %d %d", &a, &b, &c);// chuong trinh nhan gia tri cua a b c
	d=10 * a * a + 5 * b * c + c * c;// tinh gia tri bieu thuc d
	printf("gia tri cua bieu thuc 10 * %d * %d + 5 * %d * %d + %d * %d = %d",a,a,b,c,c,c,d);// in ra man hinh

	return 0;
}
