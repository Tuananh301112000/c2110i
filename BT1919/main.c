//Assignment Quan li sach(checked)
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef struct book_st{
	 char ten[30],theloai[30];
	 int giatien, namxuatban;
}Book;

void Menu(){
	printf("\n1.Nhap du lieu cua tung quyen sach.");
	printf("\n2.Sap xep va hien thi thong tin chi tiet cua tung quyen sach theo ten(Z->A), thong ke sach theo nam xuat ban.");
	printf("\n3.Tim quyen sach theo the loai.");
	printf("\n4.Ghi vao tap tin nhi phan book.dat.");
	printf("\n5.Thoat.");
}

void nhaptruyen(Book *p){
	int i;
	for(i=0;i<3;i++){
		fflush(stdin);fflush(stdout);
		printf("\nNhap quyen sach %d:",i+1);
		fflush(stdin);fflush(stdout);
		printf("\nTen: ");
		gets(p[i].ten);
		fflush(stdin);fflush(stdout);
		printf("\nThe loai: ");
		gets(p[i].theloai);
	    fflush(stdin);fflush(stdout);
		printf("\nGia tien: ");
		scanf("%d",&p[i].giatien);
		fflush(stdin);fflush(stdout);
		printf("\nNam xuat ban: ");
		scanf("%d",&p[i].namxuatban);
		fflush(stdin);fflush(stdout);		
	}
}

void hienthitruyen(Book *p){
	int i,j;
	for(i=0;i<2;i++){
		for(j=i+1;j<3;j++){
			int cmp=strcmp(p[i].ten,p[j].ten);
			if(cmp<0){
				Book temp=p[i];
				p[i]=p[j];
				p[j]=temp;
			}
		}
	}
	printf("\n%-5s||%-30s||%-30s||%-12s||%-20s","STT","Ten","The loai","Gia tien","Nam xuat ban");
	for(i=0;i<3;i++){
		printf("\n00%d  ||%-30s||%-30s||%-12d||%-20d",i+1,p[i].ten,p[i].theloai,p[i].giatien,p[i].namxuatban);
	}
	printf("\n");
	int count[3]={1,1,1};
	for(i=0;i<2;i++){
		if(count[i]==0){
			continue;
		}
		for(j=i+1;j<3;j++){
			if(count[j]==0){
				continue;
			}
			if(p[i].namxuatban==p[j].namxuatban){
				count[i]++;
				count[j]--;
			}
		}
	}
	for(i=0;i<3;i++){
		if(count[i]!=0){
			printf("\nNam %d co %d quyen sach",p[i].namxuatban,count[i]);
		}
	}
	printf("\n");
}

void timtheloai(Book *p){
	int i;
	int count=0;
	char loai[50];
	fflush(stdin);fflush(stdout);
	printf("\nNhap the loai can tim: ");
	gets(loai);
	fflush(stdin);fflush(stdout);
	for(i=0;i<3;i++){
		int cmp=strcmp(loai,p[i].theloai);
		if(cmp==0){
			count++;
	    }
	}
	if(count!=0){
		printf("\n%-5s||%-30s||%-30s||%-12s||%-20s","STT","Ten","The loai","Gia tien","Nam san xuat");
	}
	count=0;
	for(i=0;i<3;i++){
		int cmp=strcmp(loai,p[i].theloai);
		if(cmp==0){
			count++;
			printf("\n00%d  ||%-30s||%-30s||%-12d||%-20d",i+1,p[i].ten,p[i].theloai,p[i].giatien,p[i].namxuatban);
		}
	}
	if(count==0){
		printf("\nKhong co quyen sach thuoc the loai nay");
	}
	printf("\n");
}

void ghithongtin(Book *p){
	FILE *fp;
	fp=fopen("book.dat","wb");
	fread(p, sizeof(Book), 3, fp);
	fclose(fp);
}

int main(){
	Book bookList[3];
	int choose;
	while(1){
		Menu();
		printf("\nLua chon chuong trinh: ");
		scanf("%d",&choose);
		switch(choose){
			case 1:
				nhaptruyen(bookList);
			break;	
			case 2:
				hienthitruyen(bookList);
			break;	
			case 3:
				timtheloai(bookList);
			break;	
			case 4:
				ghithongtin(bookList);
				printf("\nDa luu thanh cong!!\n");
			break;	
			case 5:
				printf("\nTam biet!!\n");
				exit(0);
			break;	
			default:
				printf("\nLoi cu phap, moi chon lai!!\n");
			break;	
		}
	}
}
