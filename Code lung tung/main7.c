#include <stdio.h>
#include <stdlib.h>
//Bt uoc so chung lon nhat
int main(int argc, char *argv[]) {
 int n,giaithua;
 
 do{
 	printf("\nNhap vao n (n>=0)");
 	scanf("%d",&n);
 }while(n<0);
 
 	giaithua=1;
 	 for(int i=1; i<=n; i++){
 		giaithua = giaithua*i;
	 }
	 printf("\nGiai thua=%d",giaithua);
 }

