#include <stdio.h>
void showinfor(){
	printf("\nTen");
	printf("\nTuoi");
	printf("\ndia chi");
	printf("\nsdt");
	
}
void showmsg(){
	printf("\nHello msg ");
}
void giai_thua(int a){
	int kq=1,i;
	for(i=1;i<=a;i++)
	kq *=i;
	return kq;
}
int tong(int n){
	int kq2 = 0,i;
	for(i=0;i<=n;i++)
	kq2 +=i;
	return kq2;
}


int main(){
	
	printf("\nbai 1");
	showinfor();
	printf("\nbai 2");
	showmsg(30 );
	showmsg(11 );
	showmsg(2000 );
	printf("\nbai 3 ");
	int n,m;
	printf("\ntinh giai thua cua:");
	scanf("%d",&m);
	int kq = giai_thua(m);
	printf("\ntinh tong tu 1 den :");
	scanf("%d",&n);
	int kq2=tong(n);
	printf("\nTinh thua cua %d là %d",m,giai_thua(m));
	printf("\nTinh tong %d là %d",n,tong(n));
	
	if(kq>kq2)
	printf("\n Giai thua cua %d lon hon tong tu 1 den %d",m,n);
	else if(kq<kg2)
	printf("\nGiai thua cua %d be hon tong tu 1 den %d",m,n ");
	else
	printf("\n Giai thua cua %d bang tong tu 1 den %d",m,n);
	
	
	
	
	return 0;
}
