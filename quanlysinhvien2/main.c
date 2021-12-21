#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct Student_ST {
	char fullname[30];
	char rollNo[10];
	int year;
	float mark;
} Student;

void showMenu();
void inputStudent(Student *p);
void displayStudent(Student p[3]);
void findStudent(Student p[3]);
void saveStudent(Student *p);

int main(int argc, char *argv[]) {
	//Khai bao bao
	Student studentList[3];
	int choose;
	
	do {
		showMenu();
		scanf("%d", &choose);
		
		switch(choose) {
			case 1: {
				inputStudent(studentList);
				break;
			}
			case 2: {
				displayStudent(studentList);
				break;
			}
			case 3: {
				findStudent(studentList);
				break;
			}
			case 4: {
				saveStudent(studentList);
				break;
			}
			case 5: {
				printf("\nKet thuc chuong trinh!!!");
				break;
			}
			default: {
				printf("\nNhap sai!!!");
				break;
			}
		}
	} while(choose != 5);
	
	return 0;
}

void showMenu() {
	printf("\n1. Nhap sinh vien");
	printf("\n2. Sap xep, hien thi, thong ke");
	printf("\n3. Tim kiem theo nam sinh");
	printf("\n4. Luu File");
	printf("\n5. Thoat");
	printf("\nChon: ");
}

void inputStudent(Student *p) {
	int i;
	for(i=0;i<3;i++) {
		printf("\nEnter data of student %d:", i + 1);
		printf("\nFull name: ");
		fflush(stdin);fflush(stdout);
		gets(p[i].fullname);
		
		printf("\nRoll number: ");
		fflush(stdin);fflush(stdout);
		gets(p[i].rollNo);
		
		printf("\nYear of birth: ");
		scanf("%d", &p[i].year);
		
		printf("\nMark (/10): ");
		scanf("%f", &p[i].mark);
	}
}

void displayStudent(Student p[3]) {
	//Muc 1: Sap xep sinh vien theo diem giam dan
	int i, j;
	for(i=0;i<2;i++) {
		for(j=i+1;j<3;j++) {
			if(p[i].mark < p[j].mark) {
				//sap xep sai -> doi cho vi tri
				Student tmp = p[i];
				p[i] = p[j];
				p[j] = tmp;
			}
		}
	}
	
	//Muc 2: Hien thi ket qua dau ra
	char status[30];
	printf("\n%-8s||%-15s||%-15s||%-8s||%-8s||%-10s||", "No", "Name", "Roll Number", "Year", "Mark", "Status");
	for(i=0;i<3;i++) {
		if(p[i].mark >= 7.5) {
			strcpy(status, "DISTINCTION");
		} else if(p[i].mark >= 6) {
			strcpy(status, "CREDIT");
		} else if(p[i].mark >= 4) {
			strcpy(status, "PASS");
		} else {
			strcpy(status, "FAIL");
		}
		
		printf("\n%-8d||%-15s||%-15s||%-8d||%-8f||%-10s||", i+1, p[i].fullname, p[i].rollNo, p[i].year, p[i].mark, status);
	}
	
	//Muc 3: Thong ke.
	//C1. Cach code de nhat -> phu hop vs bai nay
	int distinctionTotal = 0, creditTotal = 0, passTotal = 0, failTotal = 0;
	for(i=0;i<3;i++) {
		if(p[i].mark >= 7.5) {
			distinctionTotal++;
		} else if(p[i].mark >= 6) {
			creditTotal++;
		} else if(p[i].mark >= 4) {
			passTotal++;
		} else {
			failTotal++;
		}
	}
	if(distinctionTotal > 0) {
		printf("\nDISTINCTION has %d student", distinctionTotal);
	}
	
	if(creditTotal > 0) {
		printf("\nCREDIT has %d student", creditTotal);
	}
	
	if(passTotal > 0) {
		printf("\nPASS has %d student", passTotal);
	}
	
	if(failTotal > 0) {
		printf("\nFAIL has %d student", failTotal);
	}
	
	//Chuc nang -> Thong ke so sinh vien theo nam sinh.
	//Nhan xet: nam sinh -> du lieu dong -> nhap tu ban phim -> Ko the ap dung cach tren lam trong TH nay dc.
	//Nghien cuu y tuong giai thuat cho bai nay.
	int countList[3];
	for(i=0;i<3;i++) {
		countList[i] = 1;
	}
	
	for(i=0;i<3;i++) {
		if(countList[i] == 0) {
			continue;
		}
		for(j=i+1;j<3;j++) {
			if(countList[j] == 0) {
				continue;
			}
			if(p[i].year == p[j].year) {
				countList[i]++;
				countList[j]--;
			}
		}
	}
	
	for(i=0;i<3;i++) {
		if(countList[i] == 0) {
			continue;
		}
		printf("\nNam %d co %d sinh vien", p[i].year, countList[i]);
	}
}

void findStudent(Student p[3]) {
	int year, count = 0, i;
	char status[30];
	printf("\nEnter year for search: ");
	scanf("%d", &year);
	
	for(i=0;i<3;i++) {
		if(p[i].year == year) {
			if(count == 0) {
				printf("\n%-8s||%-15s||%-15s||%-8s||%-8s||%-10s||", "No", "Name", "Roll Number", "Year", "Mark", "Status");
			}
			count++;
			
			if(p[i].mark >= 7.5) {
				strcpy(status, "DISTINCTION");
			} else if(p[i].mark >= 6) {
				strcpy(status, "CREDIT");
			} else if(p[i].mark >= 4) {
				strcpy(status, "PASS");
			} else {
				strcpy(status, "FAIL");
			}
			
			printf("\n%-8d||%-15s||%-15s||%-8d||%-8f||%-10s||", i+1, p[i].fullname, p[i].rollNo, p[i].year, p[i].mark, status);
			
		}
	}
	
	if(count == 0) {
		printf("\nThere are no student have this year of birth");
	}
}

void saveStudent(Student *p) {
	//B1. Khai bao + mo file
	FILE *fp;
	fp = fopen("student.dat", "wb");
	
	//B2. Luu du lieu
	if(fp == NULL) {
		printf("\nFile error!!!");
	} else {
		fwrite(p, sizeof(Student), 3, fp);
	}
	
	//B3. Dong ket noi - close file
	fclose(fp);
}
