#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int n,i,s;
	printf("nhap n =");
	scanf("%d",&n);
	i=1;
	s=0;
	while(i<=n){
		s=s+i;
		i++;
	}
	printf("tong s= %d",s);
	return 0;
}
