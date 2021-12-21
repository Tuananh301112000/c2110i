#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	float i, n, S;
	printf("Nhap n = "); scanf("%f",&n);
	S=0;
	for(i=1;i<=n;i++){
		S=S+(1/(2*i+1));}
	printf ("Tong S = %f",S);

	return 0;
}
