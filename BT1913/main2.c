 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct student_st{
	char name[30], province[30];
	int year;
}student;

void showMenu();
void nhapThongTin (student*p);
void sapXep (student *p);
void tuoiNhoNhat (student *p);
void timTheoTinh (student *p);
void saveFile (student *p);

int main(int argc, char *argv[]) {
	student studentList [3];
	int choose;
do{
	showMenu();
	scanf("%d", &choose);
	switch (choose){
		case 1:
			nhapThongTin (studentList);
			break;
		case 2:
			sapXep(studentList);
			break;
			
		case 3:
			tuoiNhoNhat (studentList);
			break;
		case 4:
			timTheoTinh (studentList);
			break;
		case 5:
			saveFile (studentList);
			break;
		case 6:
			printf("\nThoat!!!");
			
			break;
		default:
			printf("\nNhap sai!!!");
	}
	
}while (choose!=6);	
	
	
	return 0;
}
void showMenu(){
	printf("\n1. Nhap du lieu cua tung sinh vien");
	printf("\n2. Sap xep va hien thi thong tin chi tiet cua tung sinh vien theo thu tu tang dan cua ho ten");
	printf("\n3. Tim sinh vien co tuoi nho nhat");
	printf("\n4. Tim sinh vien theo tinh");
	printf("\n5. Luu thong tin vao file student.txt");
	printf("\n6. Thoat");
	printf("\nChon: ");
	
	
}
void nhapThongTin (student*p){
	int i;
	for (i=0; i<3; i++){
		printf("\nNhap thong tin sinh vien thu %d", i+1);
		printf("\nNhap ten cua sinh vien:");
		fflush(stdin); fflush(stdout);
		gets(p[i].name);
		
		printf("\nNhap tinh: ");
		fflush(stdin); fflush (stdout);
		gets(p[i].province);
		
		printf("\nNhap nam sinh: ");
		scanf("%d", &p[i].year);
	}
}
void sapXep (student *p){
	int i, j;
	student temp;
	for (i=0;i<2;i++){
		for (j=i+1;j<3;j++){
			if(strcmp(strupr(p[i].name),strupr(p[j].name))>0){
				temp=p[i];
				p[i]=p[j];
				p[j]=temp;
		}
	}}
	for (i=0; i<3;i++){
		printf("\n Sinh vien thu %d ten %s", i+1, p[i].name);
	}}
void tuoiNhoNhat (student *p){
	int i,j;
	student temp;
	printf("\nSinh vien co tuoi nho nhat:");
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
			if(p[i].year<p[j].year){
				student temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
    }
    for(i=0;i<3;i++){
    	if(p[i].year==p[0].year){
    		printf("\nHo ten: %s",p[i].name);
	        printf("\nNam sinh: %d",p[i].year);
		}
	}
}
void timTheoTinh (student *p){
	int i;
	int count =0; 
	char tinh[20];
	printf("\nNhap tinh:");
	fflush(stdin); fflush(stdout);
	gets(tinh);
	for(i=0; i<3; i++){
		if(strcmp(tinh, p[i].province)==0){
			count++;
			printf("\nSinh vien thu %d o tinh %s", i+1,p[i].province);
		}}
		if (count ==0){
			printf("\nKhong co sinh vien thuoc tinh nay");
		}}
void saveFile (student *p){
	FILE*fp;
	fp = fopen ("student.txt", "w");
	int i;
	for (i=0; i<3;i++){
		fprintf(fp, "\nSinh vien thu %d:", i+1);
		fprintf(fp, "\nHo ten:%s", p[i].name);
		fprintf(fp,"\ntinh thanh: %s", p[i].province);
		fprintf(fp,"\nNam sinh: %d", p[i].year);
		
	}
	fclose(fp);
}


