#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("\nNhap so n:");
	scanf("%d", &n);
	int h[n], i;
	
	for(i = 0; i < n; i++){
		printf("\nNhap h[%d]:", i);
		scanf("%d", &h[i]);
	}
	for(i = n -1; i >= 0; i--){
		printf("\nNhap h[%d]:", i);
		scanf("%d", &h[i]);
	}
	return 0;
}
