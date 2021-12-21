#include <stdio.h>

#include <stdlib.h>

#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char * argv[]) {

  int n; 
  printf("\nNhap so phan tu n: ");
  scanf("%d", & n);
  int t[n];

  int i;
  for (i = 0; i < n; i++) {
    printf("\nNhap phan tu t[%d] = ", i);
    scanf("%d", & t[i]);
  }

  int oddFirstIndex = -1;
  for (i = 0; i < n; i++) {
    if (t[i] % 2 == 0) {
      if (oddFirstIndex >= 0) {

        int tmp = t[i];
        t[i] = t[oddFirstIndex];
        t[oddFirstIndex] = tmp;

        oddFirstIndex++;
      }
    } else {

      if (oddFirstIndex == -1) {
        oddFirstIndex = i;
      }
    }
  }
  for (i = 0; i < n; i++) {
    printf("\nNhap phan tu t[%d] = %d", i, t[i]);
  }

  return 0;
}
