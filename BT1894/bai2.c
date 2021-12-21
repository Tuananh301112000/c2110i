#include <stdio.h>

#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char * argv[]) {
  int i = 0, n, t;
  printf("\nNhap n: ");
  scanf("%d, &n");
  int a[n];
  for (i = 1; i < n; i++) {

    printf("\nNhap n[%d]: ", i);
    scanf("%d, &a[i]");
  }
  for (i = n - 1; i >= 0; i--) {
    printf("%d", a[i]);
    scanf("%d", & a[i]);

  }

  return 0;
}
