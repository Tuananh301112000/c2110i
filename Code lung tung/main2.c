#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i,n;
	int fact = 1;
	
	printf("nhap n = ");
	scanf("%d", &n);
	
	for(i=1; i<=n; i++)
	{
		fact = fact*i;
	}
	printf("%d! = %d\n", n,fact);
	return 0;
}
