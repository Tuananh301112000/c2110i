#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int max;
	printf("\nNhap max = ");
	scanf("%d", &max);
	
	int f0 = 1, f1 = 1, fn;
	
	printf("\n1, 1");
	while(1) {
		fn = f0 + f1;
		if(fn > max) {
			break;
		}
		printf(", %d", fn);
		f0 = f1;
		f1 = fn;
	}
	
	return 0;

}
