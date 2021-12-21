#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf(" nhap gia tri cua n : ");
	scanf("%d",&n);
	printf(" tong cac gia tri tu 1 den %d la %d ", n,((n + 1) * n / 2));
	
	return 0;
}
