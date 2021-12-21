#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int r;
	float m, n, p, s, g, h;
	
	int choose;
	
	do{
		printf("\n1.Tinh chu vi hinh chu nhat: ");
		printf("\n2.Tinh dien tich hinh chu nhat: ");
		printf("\n3.Tinh chu vi hinh tron: ");
		printf("\n4.Tinh dien tich hinh tron: ");
		printf("\n5.Thoat");
		printf("\nChoose");
		scanf("%d", &choose);
		switch(choose){
			case 1:
			fflush(stdin);fflush(stdout);
			printf("\nNhap chieu rong:");
			scanf("%f", &m);
			
			fflush(stdin);fflush(stdout);
			printf("\nNhap chieu dai:");
			scanf("%f", &n);
			fflush(stdin);fflush(stdout);
			
			p = (m + n) * 2;
			fflush(stdin);fflush(stdout);
			printf("\nChu vi hinh chu nhat");
			scanf("%f", &p);
			break;
			
			case 2:
			fflush(stdin);fflush(stdout);
			printf("\nNhap chieu rong:");
			scanf("%f", &m);
			
			fflush(stdin);fflush(stdout);
			printf("\nNhap chieu dai:");
			scanf("%f", &n);

			s = m * n;
			fflush(stdin);fflush(stdout);
			printf("\nDien tich hinh chu nhat:");
			scanf("%f", &s);
			break;
			
			case 3:
			fflush(stdin);fflush(stdout);
			printf("\nNhap ban kinh:");
			scanf("%d", &r);
			
			g = 2 * acos(-1) * r; 
			fflush(stdin);fflush(stdout);
			printf("\nChu vi hinh tron:");
			scanf("%f", &g);
			break;
			
			case 4:
			fflush(stdin);fflush(stdout);
			printf("\nNhap ban kinh:");
			scanf("%d", &r);
			
			h = acos(-1) *r*r;
			printf("\nDien tich hinh tron:");
			scanf("%f", &h);
			break; 
			
			case 5:
				printf("\nThoat!!!");
				break;
				
			default:
				printf("\nNhap sai !!!");
				break;
		}
		
	}while(choose != 5);
	        
	return 0;
}
	
