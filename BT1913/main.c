#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
typedef struct student_st{
	char name[30],province[30];
	int year;
}Student;
void ShowMenu();
void input(Student *p);
void sort(Student *p);
void display(Student *p);	
void minold(Student *p);
void searchprovince(Student *p);
void savefile(Student *p);
int main(int argc, char *argv[]) {
	int choose,i;
	Student studentList[3];
	do{
		ShowMenu();
		printf("\nChoose=");
		scanf("\n%d", &choose);
		switch(choose){
			case 1:			
				input(studentList);
				break;
			case 2:
				sort(studentList);
				display(studentList);
				break;
			case 3:
				minold(studentList);
				break;
			case 4:
				searchprovince(studentList);
				break;
			case 5:
				savefile(studentList);
				break;
			case 6:
				printf("Goodbye!!!");
				break;
			default:
				printf("Nhap sai!!!");
				break;
		}
	}while(choose!=6);
	return 0;
}
void ShowMenu(){
	printf("\n1.Nhap du lieu cua tung sinh vien.");
	printf("\n2.Sap xep va hien thi thong tin chi tiet cua tung sinh vien theo thu tu tang dan cua ho ten.");
	printf("\n3.Tim sinh vien co tuoi nho nhat.");
	printf("\n4.Tim sinh vien theo tinh.");
	printf("\n5.Luu thong tin vao file student.txt");
	printf("\n6.Thoat.");
	}
void input(Student *p){
	int i;
	for(i=0;i<3;i++){
		printf("\nNhap ten sinh vien thu %d:",i+1);
		fflush(stdin);fflush(stdout);
			gets(p[i].name);
		printf("\nNhap tinh cua sinh vien thu %d:",i+1);
		fflush(stdin);fflush(stdout);
			gets(p[i].province);
		printf("\nNhap mam sinh cua sinh vien thu %d:",i+1);
			scanf("%d",&p[i].year);
}
}
void sort(Student *p){
	int i,j,cmp;
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
			cmp=strcmp(p[i].name,p[j].name);
				if(cmp>0){
					Student	tmp=p[i];
					p[i]=p[j];
					p[j]=tmp;
				}
						
		}
	}
	
}
void display(Student *p){
	int i;
	for(i=0;i<3;i++){
		printf("\nSinh vien %d:",i+1);
		printf("\nHo ten:%s",p[i].name);
		printf("\nTinh thanh:%s",p[i].province);
		printf("\nnam sinh:%d",p[i].year);
	}
}
void minold(Student *p){
	int max,i;
	max=p[0].year;
	for(i=0;i<3;i++){
		if(p[i].year>max){
			max=p[i].year;
		}
	}
	printf("\nSinh vien co tuoi nho nhat la:");
	for(i=0;i<3;i++){
		if(max==p[i].year){
			printf("\nSinh vien %d:",i+1);
			printf("\nHo ten:%s",p[i].name);
			printf("\nTinh thanh:%s",p[i].province);
			printf("\nnam sinh:%d",p[i].year);}
}}
void searchprovince(Student *p){
	char searchprovince[50];
	int i,cmp,count;
	count=0;
	printf("Nhap tinh:");
	fflush(stdin);fflush(stdout);
	gets(searchprovince);
	for(i=0;i<3;i++){
		cmp=strcmp(searchprovince,p[i].province);
		if(cmp==0){
			printf("\nSinh vien %d:",i+1);
			printf("\nHo ten:%s",p[i].name);
			printf("\nTinh thanh:%s",p[i].province);
			printf("\nnam sinh:%d",p[i].year);
			count++;
		}else if(count==0){
			printf("Khong co sinh vien thuoc tinh nay!");
		}}			
		}
void savefile(Student *p){
	FILE *fp=fopen("student.txt","a");
	int i;
	fprintf(fp,"Ten sinh vien,tinh thanh,nam sinh");
	for(i=0;i<3;i++){
		fprintf(fp,"\n%s,%s,%d",p[i].name,p[i].province,p[1].year);
	}
	fclose(fp);
}
