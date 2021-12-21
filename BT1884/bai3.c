#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float i, n, S;
printf("Nhap n = "); scanf("%f",&n);
i=1;
S=0;
do {S=S+1/i;
i++;}
while (i<=n);
printf("Tong S = %f",S);
	return 0;
}
