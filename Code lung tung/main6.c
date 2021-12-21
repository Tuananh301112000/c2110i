#include <stdio.h>
/*bai1: cho biet thang do co bao nhieu ngay
int songaycuathang(int thang,int nam) {
  switch (thang) {
  case 1:
  case 3:
  case 5:
  case 7:
  case 8:
  case 10:
  case 12:
    return 31;
  case 4:
  case 6:
  case 9:
  case 11:

    return 30;
  case 2:
    return ((nam % 400 == 0) || (nam % 4 == 0 && nam & 100 != 0))? 29:28;
  default:
    return -1;

  }
}
int main() {
  int ngay, thang, nam;
  do {
    printf("\nnhap vao ngay thang nam: ");
    scanf("%d%d%d", & ngay, & thang, & nam);

  } while (ngay < 1 || ngay > 31 || thang < 1 || thang > 12 || nam < 1);
  printf("\N So ngay cua thang: %d", songaycuathang(thang, nam));
  
}
*/
int ngaytrongnam(int ngay,int thang,int nam){
	int ntn=0;
	for(int i=1;i<thang;i++){
		ntn+=songaycuathang(thang,nam);
	}while(ngay<1|| ngay>31|| thang<1|| thang>12 || nam<1);
	printf("\n so ngay cua thang: %d",songaycuathang(thang,nam));
	
}
int main() {
  int ngay, thang, nam;
  do {
    printf("\nnhap vao ngay thang nam: ");
    scanf("%d%d%d", & ngay, & thang, & nam);

  } while (ngay < 1 || ngay > 31 || thang < 1 || thang > 12 || nam < 1);
  printf("\N So ngay cua thang: %d", songaycuathang(thang, nam));
  
