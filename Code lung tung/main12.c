#include <stdio.h>
#include <stdlib.h>


/* Khai b�o con tr? *p
- C?p ph�t m?ng p g?m 10 ph?n t?

- Nh?p c�c ph?n t? trong m?ng

- T�nh t?ng c�c s? chia h?t cho 2 trong m?ng p 
*/

int main(int argc, char *argv[]) {
	int *p;
	int i,count=0;
	p=(int*) malloc (10*sizeof(int));
	for(i=0;i<10;i++){
		printf("\nNhap phan tu thu p[%d]:",i);
		scanf("%d",p+i);
		if(p[i]%2==0){
			count=count+p[i];
		}
		printf("\n Tong cac so chia het cho 2 la: %d",count);
	}
	return 0;
}
