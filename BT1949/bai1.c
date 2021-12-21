#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[]) {
	int n, i, *p;
	printf("\nNhap n: ");
	scanf("%d", &n);
	int A[n];
	for(i=0;i<n;i++) {
		printf("\nNhap so thu: A[%d] ",i+1);
		scanf("%d", &A[i]);
	}
    int tong=0;
	for(i=0;i<n;i++) {
		if(A[i] % 5 ==0) {
			tong+=A[i];
			printf("\nTong cac so chia het cho 5 la: %d", tong);
		}
			
		}
		
	for(i=0;i<n;i++) {
		int sqr=sqrt(A[i]);
		if(sqr*sqr==A[i]) {
			printf("\nCac so chinh phuong la %d",A[i]);
		}
		
	} 
	printf("\nMang sau khi sap xep: ");
	for(i=0;i<n;i++) {
		if(A[i]%2==0) {
			printf("%d",A[i]);
		}
	}
	for(i=0;i<n;i++) {
		if(A[i]%2!=0) {
			printf("%d",A[i]);
		}
	}
		
	
		
	
	
	
	return 0;
}
