#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float width, height, radius, result;
	int choose;
	
	do {
		printf("\n1. Tinh chu vi hcn");
		printf("\n2. Tinh dien tich hcn");
		printf("\n3. Tinh chu vi hinh tron");
		printf("\n4. Tinh dien tich hinh tron");
		printf("\n5. Thoat");
		printf("\nChon: ");
		scanf("%d", &choose);
		
		switch(choose) {
			case 1: {
				printf("\nNhap chieu dai: ");
				scanf("%f", &width);
				printf("\nNhap chieu rong: ");
				scanf("%f", &height);
				result = (width + height) * 2;
				printf("\nChu vi: %f", result);
				break;
			}
			case 2: {
				printf("\nNhap chieu dai: ");
				scanf("%f", &width);
				printf("\nNhap chieu rong: ");
				scanf("%f", &height);
				result = width * height;
				printf("\nChu vi: %f", result);
				break;
			}
			case 3: {
				printf("\nNhap ban kinh: ");
				scanf("%f", &radius);
				result = 2*3.14*radius;
				printf("\nChu vi: %f", result);
				break;
			}
			case 4: {
				printf("\nNhap ban kinh: ");
				scanf("%f", &radius);
				result = 3.14*radius*radius;
				printf("\nChu vi: %f", result);
				break;
			}
			case 5: {
				printf("\nThoat chuong trinh");
				break;
			}
			default: {
				printf("\nNhap sai du lieu!!!");
				break;
			}
		}
	} while(choose != 5);
	
	return 0;
}
