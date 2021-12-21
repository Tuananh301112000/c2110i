#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {

	int *p;
	int i,count = 0;
	p = (int *) malloc (10 *sizeof(int));
	for(i=0;i<10;i++){
		printf("\nNhap phan tu thu p[%d]:",i);
	 scanf("%d", p+i);
	 if(p[i] % 2 ==0){
	 	count = count +p[i];
	}
	 
	 }
	 printf("\nTong cac so chia het cho 2 la:%d",count);

	return 0;
}


