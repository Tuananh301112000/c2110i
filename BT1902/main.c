#include <stdio.h>

#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void showin4() {
  printf("\nThong tin ca nhan");
  printf("\nHo va ten: Pham Tuan Anh");
  printf("\nTuoi: 21");
  printf("\nDia chi: Ha dong-ha noi");
  printf("\nEmail:phamtuananh2101@gmail.com");
  printf("\nSdt: 0836668336");
}
void showmsg(int msg) {
  printf("\nHello %d", msg);
}
int giai_thua(int a) {
  int kq = 1, i;
  for (i = 1; i <= a; i++)
    kq *= i;
  return kq;

}
int tong(int n) {
  int kq2 = 0, i;
  for (i = 0; i <= n; i++)
    kq2 += i;
  return kq2;
}
int main(int argc, char * argv[]) {
  printf("\nBai 1:");
  showin4();
  printf("\nBai 2:");
  showmsg(13);
  showmsg(12);
  showmsg(2000);
  printf("\nBai 3:");
  int n, m;
  printf("\nTinh giai thua cua:");
  scanf("%d", & m);
  int kq = giai_thua(m);
  printf("\nTinh tong tu 1 den:");
  scanf("%d", & n);
  int kq2 = tong(n);
  printf("\n Giai thua cua %d la %d", m, giai_thua(m));
  printf("\n Tong tu 1 den %d la %d", n, tong(n));
  printf("\n Giai thua cua %d la %d", m, giai_thua(m));

  if (kq > kq2)
    printf("\n Giai thua cua %d lon hon Tong tu 1 den %d", m, n);
  else if (kq < kq2)
    printf("\n Giai thua cua %d be hon Tong tu 1 den %d", m, n);
  else
    printf("\n Giai thua cua %d bang Tong tu 1 den %d", m, n);

  return 0;
}
