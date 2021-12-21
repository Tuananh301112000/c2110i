#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
// tim hieu ve vong lap (loop) -> while
//bai 1
	int cnt;
	
	//b1: gan gia tri cho cnt =0
	cnt=0;
	//b2: check dieu kien
	while(cnt < 5){
		printf("\n scoobe");
		cnt=cnt+1;
	}
	
	//bai 2: tinh tong cac so nguyen tu 1->10
	//phan tich: total = 1+2+3+4+5+6+7+8+9+10
	int total = 0,i=0;
	while(i<=10){
		total = total +i;
		i=i+1;
		
	}
	printf("\n TongL %d",total);
	//bai 3: tinh tong cac so chan chay tu 1->10
	//phan tich: total = 2+4=6+8+10
	total=0;
	i=0;
	while(i<=10){
		total = total +i;
		i=i+2;
		printf("\n TongL %d",total);
		//cach 2:
		int total = 0,i=0;
	while(i<=10){
		if(i % 2==0){
			total = total +i;
		}
		
		i=i+1;
		printf("\n TongL %d",total);
		//cach 3:
		total = 0;
		i = 0;
		while(i<=10){
			if(i%2==1){
				i=i+1;
				continue;
			}
		total = total +i;
		i=i+1;
		printf("\n TongL %d",total);
		
		//tinh tong cac so chay tu 1->100 & yeu cau dung tinh khi i%11=0
		total = 0;
		i=1;
		while( i<= 100 && i %11!=0){
			total = total +i;
			i=i+1:
		}
		printf("\n TongL %d",total);
		
	// tim hieu do.. while
	cnt=0;
	do{
		printf("\n scooby");
		cnt(cnt+1);
	}while(cnt<5);
	
	//tim hieu for
	total=o;
	i=1;
	while(i<=10){
		total=total+i:
			i-i+1;
	}
	printf("\n Tong: %d", total);
	
	return 0;
}
