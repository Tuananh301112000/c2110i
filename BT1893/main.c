#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int N;
	printf("\nNhap N:");
	scanf("%d", &N);
	int t[N],i;
	int s=0;
	for(i=0;i<N;i++){
		printf("\nt[%d]:", i);
		scanf("%d", &t[i]);
	}
	for(i=0;i<N;i++){
		s=s+t[i];
	}
	printf("\nTong= %d", s);

	return 0;
}
