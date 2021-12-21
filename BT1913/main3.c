#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct student_st{
	char name[30], province[30];
	int year;
}student;
void showMenu();
void nhapdulieu(student*p);
void sapxep(student*p);
void tuoinhonhat(student*p);
void timtheotinh(student*p);
void luufile(student*p);


int main(int argc, char *argv[]) {
	student studentList[3];
	int choose;{
	do{
		showMenu();
		scanf("%d",&choose);
		switch(choose);{
		case 1:{
			nhapdulieu(studentList);
			break;
		}
		case 2:{
			 sapxep(studentList);
			break;
		}
		case 3:{
			tuoinhonhat(studentList);
			break;
		}
		case 4:{
			timtheotinh(studentList);
			break;
		}
		case 5:{
			luufile(studenList);

			break;
		}
		case 6:{
			printf("\n Thoat!!!");
			break;
		}
		defaul:
			printf("\nNhap sai!!!")
		
	}
	}while (choose!=6);
		
	}
	
	return 0;
}
void showMenu();
printf("\n.1Nhap du lieu cua tung sinh vien");
printf("\n.2Sap xep va hien thi thong tin chi tiet cua tung sinh vien theo thu tu tang dan cua ho ");
printf("\n.3Tim sinh vien co tuoi nho nhat");
printf("\n.4Tim sinh vien theo tinh");
printf("\n.5Luu thong tin vao file studen.txt");
printf("\n.6Thoat");
void nhapthontin (student*p){
	int i;
	for(i=0;i<3;i++){
		printf("\nNhap thong tin sinh vien thu #d",i+1);
		printf("\nNhap ten cua sinh vien:");
		fflush(stdin); fflush (stdout);
		gets(name);
		
		printf("\nNhap tinh cua sinh vien:");
		fflush(stdin); fflush (stdout);
		gets(provincer);
		
		printf("\nNhap tuoi cua sinh vien:");
		scanf("%f",&p[i].year);
	}
}
void sapxep (student *p){
	int i,j;
	student temp;
	for(i=0;i<2;i++){
		for(j=i+1;;j<3;j++){
			if(strcmp(strupr(p[i].name),strupr(p[j].name)>0){
				temp = p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	for(i=0;i<3;i++){
		printf("\nSinh vien thu %d ten %s",i+1,p[i].name);
	}
}
void tuoinhonhat(student *p){
	int i,j;
	printf("\nSinh vien co tuoi nho nhat:");
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
			if(p[i].year <p[j].year){
				student temp = p[i];
				p[i] = p[j];
				p[j] = temp;
			}
		}
	}
	for (i=0;i<3;i++){
		if(p[i].year==p[0].year){
			printf("\nHo ten:%s",p[i].name);
			printf("\nNam sinh: %d",p[i].year);
		}
	}
}
void timtheotinh(student*p){
	int i;
	int count = 0;
	char tinh[20];
	printf("\nNhap tinh:");
	fflush(stdin);fflush(stdout);
	gets(tinh);
	for(i=0;i<3;i++){
		
	}
}
void luufile(student*p){
	FILE *P
	P= fopen("studen.txt","w")
	int i;
	for(i=o;i<3;i++){
		fprintf(p,"\nNhap sinh vien thu %d:",i+1);
		fprintf(p"\nNhap ten sinh vien:%s",p[i].name);
		fprintf(p"\nNhap dia chi sinh vien:%s",p[i].province);
		fprintf(p"\nNhap tuoi sinh vien: %d",p[i].yasr);
		
	}
	fclose(p);
}


