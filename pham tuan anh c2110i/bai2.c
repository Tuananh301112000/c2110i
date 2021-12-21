#include <stdio.h>

void printTriangle(int a){
	int i, j;
	FILE *fp;
	fp = fopen("triangle.txt", "w");
	if(fp == NULL){
		printf("Error!!!");
	}
	else{
		if(a >= 1){
		for(i = 4; i >= 1; i--){
			for(j = 1; j <= 7; j++){
				if(j <= 4 - i||j >= 4 + i){
					printf(" ");
					fprintf(fp, " ");}
				else {
					printf("#");
					fprintf(fp, "#");
			}}
			printf("\n");
			fprintf(fp, "\n");
		}}}
	fclose(fp);
}

int main() {
printf("Test Triangle \n");
printTriangle(0);
printTriangle(7);

getch();
}
