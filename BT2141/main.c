#include <stdio.h>

#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

float tong(float a, float b) {
  return a + b;
}
float hieu(float a, float b) {
  return a - b;
}
float tich(float a, float b) {
  return a * b;
}
float thuong(float a, float b) {
  return a / b;
}

int main(int argc, char * argv[]) {
  float a, b;
  int n;
  printf("\nTinh tong,hieu,tich,thuong 2 so ");
  do {
    printf("\n Chon chuc nang");
    scanf("%d", & n);
    printf("\nNhap a,b");
    scanf("%f%f", & a, & b);
    if (n != 5)
      switch (n) {
      case 1: {

        printf("%f+%f=%f", a, b, tong(a, b));
        break;
      }
      case 2: {

        printf("%f-%f=%f", a, b, hieu(a, b));
        break;
      }
      case 3: {

        printf("%f*%f=%f", a, b, tich(a, b));
        break;
      }
      case 4: {

        printf("%f/%f=%f", a, b, thuong(a, b));
        break;
      }
      case 5: {
        printf("\nThoat");
        break;
      }
      defaul: {
        printf("\nNhap lai");
      }
      }
  } while (n != 5);

  return 0;
}
