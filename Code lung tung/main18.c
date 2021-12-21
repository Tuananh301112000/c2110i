#include <stdio.h>
#include <stdlib.h>

void showInfor(){
 printf("\nTen: Pham Tuan Anh");

 printf("\nTuoi: 21");

 printf("\nDia chi: Ha dong");

 printf("\nEmail: phamtuananh2101@gmail.com ");

 printf("\nSdt: 0836668336");
} 
void showMessage(int Message){
	printf("hello %d",Message);
}

int giai_thua(int a){
	int kq = 1,i;
	for(i=1;i<=a;i++)
	kq *=i;
	return kq;
}
int tong(int n){
	int kq2 = 0,i;
	for(i=0;i<=n;i++)
	kq2+=i;
	return kq2;
}

int main(int argc, char *argv[]) {
	printf("\nBai 1");
	showInfor();
	printf("\nBai 2");
	showMessage(1);
	showMessage(2);
	showMessage(3);
	printf("\nBai 3");
	int n,m;
	printf("\nTinh giai thua cua:");
	scanf("%d",&m);
	int kq = giai_thua(m);
	printf("\n Tinh tong tu 1 den:");
	scanf("%d",&n);
	int kq2 = tong(n);
	printf("\nGiai thua cua %d la %d",m,giai_thua(m));
	printf("\nTong tu %d den %d la:",n,tong(n));
	if(kq>kq2)
	printf("\nGiai thua cua %d lon hon tong tu 1 den %d",m,n);
	else if(kq<kq2)
	printf("\nGiai thua cua %d be hon tong tu 1 den %d",m,n);
	else 
	printf("\n giai thua cua %d bang tong tu 1 den %d");
	
	
	
	return 0;
}
