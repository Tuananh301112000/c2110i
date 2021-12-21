#include <stdio.h>
int main(){
	int a,b,x;
   printf("\nNhap a: ");
   scanf("%f",&a);
    printf("\nNhap b: ");
   scanf("%f",&b);
  if(a!=0){
  	x=-b/a;
  	printf("phuong trinh co nghiem x=%f", x);
  }else {
  	if (b==0){
  		printf("phuong trinh co vo so nghiem");
	  }else{
	  	printf("\n phuong trinh vo nghiem");
	  }
  }
}
