#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#include <stdio.h>



    int n,i,j,k;

	printf("\n Nhap n");
	scanf("%d", &n);
    k=n-1;
    for( i=0; i < n-1; i++){
	for(j=0;j<2*n-1;j++){
		if(j == k-i || j == k+i) printf(" * ");
		else printf("   ");
	}
	printf("\n");
}
for( i=0; i<2*n-1;i++) printf(" * ");
return 0;
}

	
