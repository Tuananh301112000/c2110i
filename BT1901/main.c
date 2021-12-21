#include <stdio.h>

#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char * argv[]) {

  char str1[20], str2[20];
  int i, s1, s2;
  printf("\nNhap chuoi 1: ");
  gets(str1);

  s1 = strlen(str1);
  printf("\nChieu dai chuoi 1 la : %d", s1);

  printf("\nNhap chuoi 2: ");
  gets(str2);
  s2 = strlen(str2);
  printf("\nChieu dai chuoi 2 la: %d", s2);

  strcat(str1, str2);
  s1 = strlen(str1);
  printf("\nChieu dai chuoi 1 sau khi noi str1 va str2 la: %d", s1);

  for (i = 0; i < s1; i++) {
    printf("\n%c", str1[i]);
  }

  return 0;
}
