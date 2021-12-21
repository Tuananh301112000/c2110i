#include <stdio.h>

#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void showMenu();
void find(int dataList[100], int currentIndex);

int main(int argc, char * argv[]) {
  int dataList[100];
  int currentIndex = -1;
  int choose, i, j;
  int tmpList[100];
  int tmpIndex = -1;
  int del;

  do {
     showMenu();
     scanf("%d", & choose);

     switch (choose) {
     case 1:
      currentIndex++;\
      printf("\nNhap phan tu thu %d: ", currentIndex);
      scanf("%d", & dataList[currentIndex]);
      break;
     case 2:

      for (i = 0; i < currentIndex; i++) {
        for (j = i + 1; j <= currentIndex; j++) {
          if (dataList[i] > dataList[j]) {

            int tmp = dataList[i];
            dataList[i] = dataList[j];
            dataList[j] = tmp;
          }
        }
      }
      break;
    case 3:
      find(dataList, currentIndex);
      break;
    case 4:
      tmpIndex = -1;
      printf("\nNhap phan tu can xoa: ");
      scanf("%d", & del);

      for (i = 0; i <= currentIndex; i++) {
        if (dataList[i] != del) {
          tmpList[++tmpIndex] = dataList[i];
        }
      }

      currentIndex = tmpIndex;
      for (i = 0; i <= currentIndex; i++) {
        dataList[i] = tmpList[i];
      }

      break;
    case 5:
      printf("\nDanh sach cac phan tu trong mang\n");
      for (i = 0; i <= currentIndex; i++) {
        printf("%d, ", dataList[i]);
      }
      break;
    case 6:
      printf("\nGoodbye!!!");
      break;
    default:
      printf("\nNhap sai!!!");
      break;
    }
  } while (choose != 6);

  return 0;
}
void find(int dataList[100], int currentIndex) {
  printf("\nNhap so can tim: ");
  int x, i, count = 0;
  scanf("%d", & x);
  for (i = 0; i <= currentIndex; i++) {
    if (dataList[i] == x) {
      count++;
    }
  }
  printf("\nSo phan tu tim duoc: %d", count);
}

void showMenu() {
  printf("\n1. Nhap phan tu");
  printf("\n2. Sap xep");
  printf("\n3. Tim kiem");
  printf("\n4. Xoa");
  printf("\n5. Hien thi");
  printf("\n6. Thoat");
  
 
}
