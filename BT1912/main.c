#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
  int N, a, b, tam, tong, sx;
  int choose;
  int * t;
  do {
    printf("\n1. Nhap vao cac so nguyen");
    printf("\n2. Hien thi danh sach cac phan tu");
    printf("\n3. Tinh tong cac phan tu");
    printf("\n4. Sap xep theo thu tu tang dan");
    printf("\n5. Thoat");
    printf("\nChon : ");
    scanf("%d", & choose);
    switch (choose) {
    case 1:
      printf("\nNhap so nguyen N = ");
      scanf("%d", & N);
      t = (int * ) malloc(N * sizeof(int));

      for (a = 0; a < N; a++) {
        printf("nhap du lieu phan tu thu %d: ", a);
        scanf("%d", t + a);
      }
      break;
    case 2:
      for (a = 0; a < N; a++) {
        printf("\nt[%d] = %d ", a, t[a]);
      }
      break;
    case 3:
      tong = 0;
      for (a = 0; a < N; a++) {
        tong = tong + t[a];
      }
      printf("Tong cac phan tu trong mang la %d", tong);
      break;
    case 4:
      for (a = 0; a < N - 1; a++) {
        for (b = a + 1; b < N; b++) {
          if ( * (t + a) > * (t + b)) {
            sx = * (t + a);
            *(t + a) = * (t + b);
            *(t + b) = sx;
          }
        }
      }
      printf("cac phan tu thu tu tang dan la:");
      for (a = 0; a < N; a++) {
        printf("%d", *(t + a));
      }
      break;
    case 5:
      printf("Thoat");
      break;
    default:
      printf("Nhap sai!!!");
      break;

    }
  } while (choose <= 5);

  return 0;
}
