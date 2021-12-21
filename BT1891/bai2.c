#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n,tong;
	tong = 0;
	printf("Nhap n = ");
	scanf("%d", &n);
	
	for(i=1;i<=n;i++) {
		if(i % 2 == 0 && i % 3 != 0) {		
		tong = tong + i;
		}
	} 
	
	printf("Tong cac so chia het cho 2 va khong chia het cho 3 la: %d", tong);
		
	return 0;
	
}
