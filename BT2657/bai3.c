#include <stdio.h>

#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char * argv[]) {
  int i, j, k, dem;
  dem = 0;
  for (i = 1; i < 200; i++)
    for (j = 1; j < 100; j++)
      for (k = 1; k < 40; k++)
        if (i * 1000 + j * 2000 + k * 5000 == 200000) {
          dem++;
          printf("\n %d,%d,%d", i, j, k);
        }
  printf("\n %d,dem");
  return 0;
}
