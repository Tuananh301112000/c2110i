#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdstring.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s1[50], s2[50];
	printf("\nNhap s1 =");
	gets(s1);
	printf("\nNhap s2 =");
	gets(s2);
	
	int i,j,length1,length2;
	length1 = strlen(s1);
	length2 = strlen(s2);
	bool isfind;
	if(length1>=length2){
		for(i=o;i<length1-length2;i++){
			isfind = true;
		for(j=0;j<langth2;j++){
			if(s1[i+j] !=s2[j]){
				break;
			}
			if(isfind){
				printf("\n Chuoi nhap vao ko hop le!!");
			}
		}
}
	return 0;
}
