#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#include <stdio.h>


	int h;
	int i, j, k;
	printf("nhap do cao h: ");
	scanf("%d", & h);
	int g = h;
	for(i = 1; i <= h*2 ; i+=2)
	{
	for(k = 0; k < g; k++)
	{
		printf(" ");
	}
	for(j = 0; j < i; j++)
		printf("*");
	printf("\n");
	g--;
	}
	return 0;
}

