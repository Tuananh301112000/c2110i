#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	 int r;

            float chuvi, dientich;

            printf("Nhap ban kinh r:");

            scanf("%d", &r);
            
            float PI=3.14;

            chuvi = 2*PI*r;

            dientich = PI*r*r;

            printf("Chu vi hinh tron la: %f\n", chuvi);

            printf("Dien tich hinh tron la: %f", dientich);

            
	return 0;
}
