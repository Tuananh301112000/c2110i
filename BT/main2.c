#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int num,i;
	printf("\nNhap gia tri cua n: ");
	scanf("%d",&num);
	printf("\n Bang cuu chuong cua %d la:",num);
	for (i=1;i<10;i++)
	{
		
		printf("%d x %d =%d/n", num,i,num*i);
	
	}
	
	return 0;
}
