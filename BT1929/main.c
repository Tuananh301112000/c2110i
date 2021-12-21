#include  <stdio.h>



typedef struct HCN{
		float dientich, chieudai, chieurong ;
		
	}HCN;
int main(int argc, char *argv[]) {	
	HCN List[5];
	int i;
	float sum;
	sum=0;
	for (i=0;i<5;i++){
		printf("\nNhap hinh chu nhat thu %d",i+1);
		printf("\nNhap chieu dai:");
		scanf("%f", &List[i].chieudai);
		printf("\nNhap chieu rong: ");
		scanf("%f", &List[i].chieurong);
		printf("\nDien tich hinh chu nhat thu %d la: %f", i, List[i].dientich=List[i].chieudai*List[i].chieurong);	
	sum = sum+List[i].dientich;
	}
	printf("\nTong dien tich 5 hinh chu nhat: %f", sum);
	return 0;
}
