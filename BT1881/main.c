#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[200];
	printf("\nNhap str: ");
	gets(str);
	
	printf("\n%s\n", str);
	
	int len = strlen(str);
	int i;
	for(i=len-1;i>=0;i--) {
		printf("%c", str[i]);
}
	return 0;
}
