#include <stdio.h>
#include <stdlib.h>
int main(){
	char str[50];
	printf("\nNhap str:");
	gets(str);
	int length = strlen(str);
	int i;
	printf("\nHien thi str:");
	for(i=0;i<length;i++);{
		printf("\n%c",str[i]);
		
	}
	
}
