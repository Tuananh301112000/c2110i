#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x;
	int t=[5];
 	int *p;
 	p=(int*)malloc(5* sizeof(int));
 	int i;
 	for(i=0;i<5;i++){
 		printf("\n Nhap p[%d]",i);
 		scanf("%d",p+i);
 		//scanf("%d",&p[i]);
	 }
	 printf("\n Danh sach phan tu trong mang");
	 for(i=0;i<5;i++){
	 	printf("\n%d",p[i]);
	 	
	 }
	 free (p);
	return 0;
}
