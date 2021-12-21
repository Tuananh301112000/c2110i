#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct sinhvien{
	char name[50];
	char rollno[20];
	int age;
}sinhvien;
	int main(int argc, char *argv[]) {
		int n;
		printf("\nSo luong sinh vien la: ");
		scanf("%d", &n);
		sinhvien sinhvienlist[n];
		int i;
		for(i=0;i<n;i++ ){
			printf("\nNhap sinh vien thu %d: ",i+1);
			printf("\nNhap ten: ");
			fflush(stdin);fflush(stdout);
			gets(sinhvienlist[i].name);
			
			printf("\nNhap Ma SV:");
			fflush(stdin);fflush(stdout);
			gets(sinhvienlist[i].rollno);
			
			printf("\nNhap tuoi sinh vien: ");
			fflush(stdin);fflush(stdout);
			scanf("%d", &sinhvienlist[i].age);
		}
		for(i=0;i<n;i++){
			if(sqrt(sinhvienlist[i].age)*sqrt(sinhvienlist[i].age) == sinhvienlist[i].age){
			printf("\nSinh vien co tuoi la so chinh phuong:", sinhvienlist[i].age);
			printf("\nTen:%s", sinhvienlist[i].name);
			printf("\nMaSV:%s", sinhvienlist[i].rollno);
			printf("\nTuoi:%d", sinhvienlist[i].age);
		}
		}
	return 0;
}

