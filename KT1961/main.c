#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int isPrime(int n);
int main(int argc, char *argv[]) {
	//Exercier 1:
	printf("\nExercier 1: ");
	int number, k;
	printf("\nNhap number = ");
	scanf("%d", &number);
	isPrime(number);
	k = isPrime(number);
	printf("\nGia tri tra ve: 1 - so nguyen to, 0 - khong phai so nguyen to: %d", k);
	
	//Exercier 2:
	printf("\nExercier 2: ");
	int i, n, m;
	printf("\nNhap n,m: ");
	printf("\nSo can duoi, n = ");
	scanf("%d", &n);
	printf("\nSo can tren, m = ");
	scanf("%d", &m);
	printf("\nCac so nguyen to trong khoang [n - m]: ");
	for(i=n;i<=m;i++) {
		k = isPrime(i);
		if (k == 1) {
			printf("\n%d", i);
		}
	}
		
	return 0;
}

int isPrime(int n) {
	int i, j, count = 0;

	for(i=2;i<n;i++) {
		if (n % i == 0) {
			count++;
		}
	}
	if (count == 0) {
		return 1;
	}
	else {
		return 0;
	}
}




