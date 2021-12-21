#include <stdio.h>
#include <stdlib.h>

int main(int argc, char * argv[]) {
  int sum, N, M, i, j;
  printf("\nEnter n = ");
  scanf("%d", & N);

  sum = 0;
  for (i = 1; i <= N; i++) {
    sum = sum + i;
  }
  printf("Sum = %d",sum);

  sum = 0;
  printf("\n\nEnter M =");
  scanf("\n%d", & M);
  for (i = N; i < M; i++) {
    if (i % 5 == 0) {
      printf("%d ", i);
      sum += i;
    }
  }
  printf("\n\nSum = %d", sum);
  sum = 0;
  for (i = 6; i <= 6; i++) {
    printf("\n\nEnter k = 6\n", i);
    for (j = 1; j < 11; j++) {
      printf("\t%d x %d = %d\n", i, j, i * j);
      sum += i;
    }
  }
  printf("\nSum = %d", sum);
  sum = 0;
  return 0;
}
