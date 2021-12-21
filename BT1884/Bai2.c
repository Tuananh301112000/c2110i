#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n,s;
	printf("Nhap  n = "); 
	scanf("%d",&n);
    S=0;
for (i=0;i<=n;i++)
{S=S+i*i;}
printf("\nTong S = %d",S);
	return 0;
}
