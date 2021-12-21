#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

/**
* Ham ko tham so dau vao, void -> ko tra ve ket qua
*/
void testMenu() {
	printf("\nHello A");
	printf("\nHello B");
	printf("\nHello C");
}

void tinhtong(int n) {
	int i, sum = 0;
	for(i=0;i<=n;i++) {
		sum += i;
	}
	printf("\nsum = %d", sum);
}

void tinhtong2(int m, int n) {
	int i, sum = 0;
	for(i=m;i<=n;i++) {
		sum += i;
	}
	printf("\nsum = %d", sum);
}

int tinhtong3(int m, int n) {
	int i, sum = 0;
	for(i=m;i<=n;i++) {
		sum += i;
	}
	return sum;
}

int testReturn(int n) {
	if(n % 2 == 0) {
		return 12;
	}
	if(n % 3 == 0) {
		return 10;
	}
	return 2;
}

void changeValue(int x) {
	x += 5;
	printf("\nx = %d", x);
}

void changeValue2(int *x) {
	*x += 5;
	printf("\nx = %d", *x);
}

/**
* main -> ten function
* int (int main) -> kieu du lieu tra ve
* argc, argv -> bien tham so dau vao
* int (int argc, char *argv[]) -> kieu du lieu cua cac tham so dau vao
*/
int main(int argc, char *argv[]) {
	//Vi du basic - gia su chung ta co 1 chuong nhu sau.
//	printf("\nHello A");
//	printf("\nHello B");
//	printf("\nHello C");
	testMenu();
	
	int x2 = 5;
	printf("\nx = %d", x2);
	
//	printf("\nHello A");
//	printf("\nHello B");
//	printf("\nHello C");
	testMenu();
	
//	printf("\nHello A");
//	printf("\nHello B");
//	printf("\nHello C");
	testMenu();
	
//	printf("\nHello A");
//	printf("\nHello B");
//	printf("\nHello C");
	testMenu();
	x2++;
	printf("\nx = %d", x2);
	
//	printf("\nHello A");
//	printf("\nHello B");
//	printf("\nHello C");
	testMenu();
	//Nhan xet ve khoi code tren
	//khoi code in A, B, C -> lap di lap lai rat nhieu lan -> toi uu code
	//Giai phap toi uu la gi???
	//function -> testMenu() -> thay the -> ket qua giong nhau
	
	//nghien cuu ve loi ich cua function
	int i, n, sum;
	
	//tinh tong so chay tu 0 -> 10
	n = 10;
	sum = 0;
	for(i=0;i<=n;i++) {
		sum += i;
	}
	printf("\nsum = %d", sum);
	
	//tuong tu -> su dung function
	tinhtong(10);
	
	//tinh tong so chay tu 0 -> 16
	n = 16;
	sum = 0;
	for(i=0;i<=n;i++) {
		sum += i;
	}
	printf("\nsum = %d", sum);
	
	//tuong tu -> su dung function
	tinhtong(16);
	//tinh tong so chay tu 0 -> 22
	n = 22;
	sum = 0;
	for(i=0;i<=n;i++) {
		sum += i;
	}
	printf("\nsum = %d", sum);
	
	//tuong tu -> su dung function
	tinhtong(22);
	
	//phan tich de viet function
	int m;
	
	//code chuc nang
	//Tinh tong cac so chay tu 5 - 12
	sum = 0;
	m = 5;
	n = 16;
	for(i=m;i<=n;i++) {
		sum += i;
	}
	printf("\nsum = %d", sum);
	
	tinhtong2(5, 16);
	
	//Tinh tong cac so chay tu 8 - 18
	sum = 0;
	m = 8;
	n = 18;
	for(i=m;i<=n;i++) {
		sum += i;
	}
	printf("\nsum = %d", sum);
	
	tinhtong2(8, 18);
	
	//thay doi code 1 chut
	m = 7;
	n = 13;
	tinhtong2(m, n);
	
	//nang cao hon 1 chut
	//So sanh ket qua tinh tong tu 5->16 va 8 -> 18: Se lam nhu the nao???
	int sum1 = tinhtong3(5, 16);//tong 5 -16
	int sum2 = tinhtong3(8, 18);//tong 8 -> 18
	
	printf("\nsum1 = %d, sum2 = %d", sum1, sum2);
	
	if(sum1 > sum2) {
		printf("\nTong 5->16 > 8 -> 18");
	} else if(sum1 == sum2) {
		printf("\nTong 5->16 = 8 -> 18");
	} else {
		printf("\nTong 5->16 < 8 -> 18");
	}
	
	int k = testReturn(12);
	printf("\nk = %d", k);
	
	//Nang cao tiep
	int x = 7;
	changeValue(x);
	printf("\nx = %d", x);
	
	x = 7;
	changeValue2(&x);
	printf("\nx = %d", x);
	
	//tim hieu strchr, strstr
	char s1[150] = "Sinh vien Aptech 54 Le Thanh Nghi";
	char s2[50] = "Aptech";
	char c = '5';
	
	char *p;
	p = strstr(s1, s2);
	printf("\np = %s", p);
	
	p = strchr(s1, c);
	printf("\np = %s", p);
	
	return 0;
}

//int tenham(int a, int b) {
//	//code j cung dc ...
//	int result = 12;
//	
//	return result;
//}
	return 0;
}
