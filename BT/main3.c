#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n,i;
	printf("\nNhap n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0)printf("\nUoc cua n la %d",i);
	}

return 0;
}


