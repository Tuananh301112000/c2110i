#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *p, *pEven;
	int choose;
	int total = 0, n, i, index;
	
	do {
		printf("\n1. Them n phan tu vao *p");
		printf("\n2. Hien thi mang *p");
		printf("\n3. Hien thi danh sach phan tu trong *pEven");
		printf("\n4. Thoat");
		printf("\nChon: ");
		scanf("%d", &choose);
		
		switch(choose) {
			case 1: {
				printf("\nNhap so phan tu can them n = ");
				scanf("%d", &n);
				if(total == 0) {
					p = (int *) calloc(n, sizeof(int));
				} else {
					p = (int *) realloc(p, (total + n) * sizeof(int));
				}
				//Them cac phan tu moi: total -> total + n
				for(i=total;i<total + n;i++) {
					printf("\nNhap p[%d] = ", i);
					scanf("%d", p + i);
				}
				//update tong so phan tu trong mang p
				total += n;
				break;
			}
			case 2: {
				printf("\nDanh sach phan tu trong *p");
				for(i=0;i<total;i++) {
					printf("\n%d", p[i]);
				}
				break;
			}
			case 3: {
				//Duyet qua cac phan tu trong *p -> xac dinh vi tri so chan
				int count = 0;
				for(i=0;i<total;i++) {
					if(p[i] % 2 == 0) {
						if(count == 0) {
							pEven = (int *) calloc(1, sizeof(int));
						} else {
							pEven = (int *) realloc(pEven, (count + 1) * sizeof(int));
						}
						pEven[count] = i;
						count++;
					}
				}
				
				//Hien thi
				printf("\nDanh sach cac so chan");
				for(i=0;i<count;i++) {
					//pEven[i] -> vi tri index so chan trong p
					index = pEven[i];
					printf("\n%d -> %d", index, p[index]);
				}
				break;
			}
			case 4: {
				printf("\nThoat chuong trinh!!!");
				break;
			}
			default: {
				printf("\nNhap sai!!!");
				break;
			}
		}
	} while(choose != 4);
	return 0;
}	
