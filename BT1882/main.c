#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[50], email[100];
	int age;
	

	int choose = 0;
	while(choose != 3) {
	
		printf("\n============================");
		printf("\n============MENU============");
		printf("\n1. Nhap thong tin sinh vien");
		printf("\n2. In thong tin sinh vien");
		printf("\n3. Thoat chuong trinh");
	
		printf("\nChoose: ");
		scanf("%d", &choose);
		
		switch(choose) {
			case 1:
			
				printf("\nNhap ten: ");
				fflush(stdin);fflush(stdout);
				scanf("%s", name);
				printf("\nNhap email: ");
				fflush(stdin);fflush(stdout);
				scanf("%s", email);
				printf("\nNhap tuoi: ");
				fflush(stdin);fflush(stdout);
				scanf("%d", &age);
				break;
			case 2:
				printf("\nTen: %s, email: %s, tuoi: %d", name, email, age);
				break;
			case 3:
				printf("\nThoat chuong trinh, goodbye!!!");
				break;
		}
	}
	
	return 0;
}


