#include <stdio.h>

#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char * argv[]) {
  int i, j, m, n;
  printf("\nNhap m;");
  scanf("%d", & m);
  printf("\nNhap n;");
  scanf("%d", & n);
  for (i = 1; i <= m; ++i) {
    for (j = 1; j <= n; ++j) {
      printf("*");
    }
    printf("\n");
  }

  printf("\n");
  for (i = 1; i <= m; ++i) {
    for (j = 1; j <= n; ++j) {
      if (i == 1 || i == m || j == n)

      {

        printf("*");
        if (j == n)
          printf("\n");
      } else
        printf(" ");
    }
  }

  getch();
  return 0;
}
