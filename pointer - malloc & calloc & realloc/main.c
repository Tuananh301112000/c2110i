#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int x;//x -> bien so nguyen
	int t[5];//t -> mang so nguyen gom 5 phan tu
	
	int *p;
	//p -> luu dia chi cua bien dang tro toi -> so nguyen hoac mang so nguyen
	//p -> null -> chua tro toi bat ky vung nho nao.
	
//	p = &x;
//	p = t;
	//Cap phat 1 vung nho cho tro p -> mang gom N phan tu
	//Cap phat p -> tro vao 1 vung nho gom 5 phan
	p = (int *) malloc (5 * sizeof(int));//coi p nhu khai int p[5] -> su dung bt.
	
	//nhap phan tu cho mang p
	int i;
	for(i=0;i<5;i++) {
		printf("\nNhap p[%d] = ", i);
		scanf("%d", p + i);
//		scanf("%d", &p[i]);
	}
	
	printf("\nDanh sach phan tu trong mang");
	for(i=0;i<5;i++) {
		printf("\n%d", p[i]);
	}
	free(p);
	
	//Phan 2: cap dong bo nho -> thay doi dc bo nho chuong trinh
	int *q;
	//Cap phat cho q -> 2 o nho
	q = (int *) calloc(2, sizeof(int));
	q[0] = 1;
	q[1] = 7;
	//Mo rong q -> co tong 5 o nho
	q = (int *) realloc (q, 5 * sizeof(int));
	q[2] = 7;
	q[3] = 2;
	q[4] = 4;
	//Mo rong q -> co tong 7 o nho
	q = (int *) realloc (q, 7 * sizeof(int));
	q[5] = 2;
	q[6] = 9;
	//Mo rong q -> co tong 8 o nho
	q = (int *) realloc (q, 8 * sizeof(int));
	q[7] = 10;
	
	//Hien thi ket qua
	printf("\nDanh sach phan tu trong mang (q)");
	for(i=0;i<8;i++) {
		printf("\n%d", q[i]);
	}
	
	//Giai phong tai nguyen
	free(q);
	
	return 0;
}
	
