#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float a,b;
	printf("nhap vao gia tri a=");
	scanf("%f", &a);
	printf("\nnhap vao gia tri b=");
	scanf("%f", &b);
	float  tong=a+b;
	printf("\n%.2f+%.2f=%.2f",a,b,tong);
	
    float hieu =a-b;
	printf("\n%.2f-%.2f=%.2f",a,b,hieu);
	
    float  tich=a*b;
 	printf("\n%.2f*%.2f=%.2f",a,b,tich);
 	
    float  thuong=a+b;
	printf("\n%.2f/%.2f=%.2f",a,b,thuong);
	
	int r= ((int)a) % ((int)b);
	printf("\n %.2f chia lay du %.2f = %d",a,b,r);
	a++;
	printf("\n% a++ = %.2f",a );

	b--;
	printf("\n% b-- = %.2f",b );
	
	
	
	
	
	return 0;
}
