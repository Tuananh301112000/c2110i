#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int *p;
	int i,count = 0;
	p = (int *) malloc (10 *sizeof(int));
	for(i=0;i<10;i++){
		printf("\nNhap phan tu thu p[%d]:",i);
	 scanf("%d", p+i);
	 if(p[i] % 2 ==0){
	 	count = count +p[i];
	}
	 
	 }
	 printf("\nTong cac so chia het cho 2 la:%d",count);
	 
	  // Bai tap con tro

int main() {
  int n, sum = 0;
  int arr[n];
  int * ptr;
  int i;
  printf("\nNhap so luong phan tu: ");
  scanf("%d", & n);

  for ( i = 0; i < n; i++) {
    printf("\nNhap phan tu thu %d :", i+1);
    scanf("%d", & arr[i]);
  }
  printf("\nMang sau khi nhap lai:",i+1);
  for ( i = 0; i < n; i++) {
    printf("\t%d,arr[i]");
  }
  ptr = arr;
  for ( i = 0; i < n; i++) {
    sum = sum + * ptr;
    ptr++;
  }
  printf("\nTong cac phan tu cua mang la:%d", sum);
  return 0;
}
  return 0;
}


