#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
int chieu_dai, chieu_rong;
	printf(" nhap chieu dai cua hinh chu nhat: ");
	scanf("%d",&chieu_dai);
	printf("nhap chieu rong cua hinh chu nhat:");
	scanf("%d",&chieu_rong);
	printf("\n chu vi cua hinh chu nhat la :%d ",(chieu_dai+chieu_rong)*2);
	printf("\n dien tich cua hinh chu nhat la: %d ",(chieu_dai*chieu_rong));
	
return 0;
