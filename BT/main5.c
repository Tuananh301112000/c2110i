#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int x,y,a,b;
do{
	printf("\nNhap a,b = ");
	scanf("%d%d",&a,&b);
}
	while(a<=0 || b<=0);
	x = a;
	y = b;
	while(a!=b){
		if(a>b){
			a-=b;
		}
		else{
			b-=a;
		}
	}
	printf("\nUoc chung lon nhat la %d",a);
	printf("\nBoi chung lon nhat la %d",(x*y)/a);
	return 0;
}
