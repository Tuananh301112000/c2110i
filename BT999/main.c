#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a,b,uscln;
	printf("\nNhap vao 2 so nguyen a,b");
	scanf("%d%d",&a,&b);
	//th1
	if(a==0||b==0){
		uscln = (a+b);
	}else{
		//th2
		while(a!=b){
			if(a>b){
				a=a-b;
			}else{
				b=b-a;
			}
		}
		uscln=a;
	}
	printf("\n uscln=%d",uscln);
	return 0;
}
