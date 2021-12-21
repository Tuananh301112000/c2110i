#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n;
	printf("\n Nhap n:");
	scanf("%d",&n);
	if(n&2==0){
		printf("\n So nhap vao la so chan");
	}else if(n&2==1){
		printf("\nSo nhap vao la so le");
	}
	
	return 0;
}
