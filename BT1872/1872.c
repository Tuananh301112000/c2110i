#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a1, a2, a3, a4, min, max;
	printf("\nNhap a1 = ");
	scanf("%d", &a1);
	
	printf("\nNhap a2 = ");
	scanf("%d", &a2);
	
	printf("\nNhap a3 = ");
	scanf("%d", &a3);
	
	printf("\nNhap a4 = ");
	scanf("%d", &a4);
	
	min = a1;
	max = a1;
	
	if(min > a2) {
		min = a2;
	}
	if(min > a3) {
		min = a3;
	}
	if(min > a4) {
		min = a4;
	}
	
	if(max < a2) {
		max = a2;
	}
	if(max < a3) {
		max = a3;
	}
	if(max < a4) {
		max = a4;
	}
	
	printf("\n min=%d,max=%d", min,max);
	
	return 0;
}
