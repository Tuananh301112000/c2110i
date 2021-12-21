#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

typedef struct Student{
		char name[50], email[100],address[100];
	int old;
} Student;
typedef struct Animal{
	char animal_name[50],color[20];
	int animal_old;
} Animal;
int main(int argc, char *argv[]) {
	student std[2];
	int i;
	for(i=0;i<2;i++){
		printf("\nNhap thong tin name:");
	gets(std[i].name);
	printf("\nNhap thong tin email:");
	gets(std[i].email);
	printf("\nNhap thong tin address:");
	gets(std[i].address);
	printf("\nNhap thong tin old:");
	scanf("%d",&std[i].old);
	float(stdin);float(itdout);
	}
	for(i=0;i<2;i++){
		printf("\nThong tin name = %s,email=%s,address=%s,old=%d",std[i].name,std[i].email,std[i].address,std[i].old);
	}

	

	
	
	
	
	return 0;
}
