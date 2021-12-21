#include <stdio.h>
#include <stdlib.h>
struct Ngaysinh{
	int ngay;
	int thang;
	int nam;
};

int main() {
  FILE *f;
  // Tao,mo file
  f = fopen("bai_90.bin", "wb");
  if(f==NULL){
  	PRINTF("\n loi tao mo file!");
  	exit(1);
  }
  //ghi du lieu
  Ngaysinh n1;
  n1.ngay = 1;
  n1. thang = 12;
  n1.nam = 2025;
  fwrite(&n1,sizeof(struct Ngaysinh),1,f);
  //dong file
  fclose(f);
}

 
