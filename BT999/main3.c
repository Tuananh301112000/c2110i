#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int N;
	printf("\nNhap n: ");
	scanf("%d",&N);
	int arr2[N];
	int i;
	for(i=0;i<N;i++){
		printf("Nhap arr2[%d]",i);
		scanf("%d",&arr2[i]);
	}
	int sum = 0;
	for(i=0;i<N;i++){
		sum +=arr2[i];
	}
	printf("\nTong: %d",sum);
	return 0;
}
