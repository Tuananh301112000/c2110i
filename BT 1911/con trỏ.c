#include <stdio.h>
#include <conio.h>

int main() {
  int n, sum = 0;
  int arr[n];
  int * ptr;
  int i;
  printf("\nNhap so luong phan tu: ");
  scanf("%d", & n);

  for ( i = 0; i < n; i++) {
    printf("\nNhap phan tu thu %d :", i);
    scanf("%d", & arr[i]);
  }
  printf("\nMang sau khi nhap lai:");
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
