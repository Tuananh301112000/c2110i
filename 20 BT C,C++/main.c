#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	B�i 1  T�nh tong b�nh phuong c�c so le tu 1 den n
 
#include<stdio.h>
#include<conio.h>
main()
{
    int i,s=0,n;
    printf("Nhap n:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            s=s+i*i;
        }
    }
    printf("Tong binh phuong cac so le la: %d", s);
    getch();
}    
Bai2 T�m max cua 3 so a,b,c nhap tu b�n ph�m
 
#include<stdio.h>
#include<conio.h>
main()
{
    int a,b,c,max;
    printf("Nhap a=");
    scanf("%d",&a);
    printf("Nhap b=");
    scanf("%d",&b);
    printf("Nhap c=");
    scanf("%d",&c);
    max=a; 
    if(b>max)
    {
          max=b; 
    }
    if(c>max)
      {
        max=c;
     }
    printf("gia tri lon nhat la: %d",max);
    getch();
}
B�i 3
 
Nhap mot so nguy�n tu b�n ph�m, kiem tra xem d� l� so chan hay le
 
#include<stdio.h>
#include<conio.h>
main()
{    
    int x;
    printf("Nhap x:");
    scanf("%d",&x);
    if(x%2==0)
    {
        printf("%d la so chan",x);
    }
    else
    {
        printf("%d la so le",x);
    }
    getch();
}
 
 
Bai 4
 
T�m uoc so chung lon nhat v� boi so chung nho nhat cua 2 so nguy�n nhap tu ban phim
 
#include<stdio.h>
#include<conio.h>
#include<conio.h>
main()
{            
    int x,y,a,b;
    do
    {
        printf("Nhap a,b = ");
        scanf("%d%d",&a,&b);
    }
    while(a<=0 || b<=0);
    x=a;
    y=b;
    while(a!=b)
    {
        if(a>b)
        {
            a-=b;
        }
        else
        {
            b-=a;    
        }
    }
    printf("Uoc chung lon nhat la %d",a);
    printf("\nBoi chung nho nhat la %d",(x*y)/a);
    getch();
}
B�i 5
 
Nhap mot so nguyen tu ban phim. kiem tra so co phai la so hoan hao?
 
 
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{    
    int x;
    int s=0,i;
    printf("Nhap mot so nguyen duong \n");
    scanf("%d", &x);
    for(i=1;i<x;i++)
    {
        if(x%i== 0)
        {
            s=s+i;
        }        
    } 
    if(s==x)
    {
        printf("%d la so hoan hao",x);
    }
    else
    {
        printf("%d khong phai la so hoan hao",x);
    }
    getch();        
}
 
 
 
B�i 6
 
Nhap mot so nguy�n tu b�n ph�m. Kiem tra mot so c� phai l� so ch�nh phuong kh�ng?
 
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{    
    int x,y;
    printf("Nhap x=");
    scanf("%d",&x);  
    y=sqrt(x);
    if(x==y*y)
    {
        printf("%d la so chinh phuong",x);
    } 
    else
    {
        printf("%d khong phai la so chinh phuong",x);        
    }
    getch();    
}    
B�i 7
 
Viet chuong tr�nh in ra c�c so nguy�n tu trong phim vi tu 1 den n, voi n nguy�n nhap tu b�n ph�m.
 
#include<stdio.h>
#include<conio.h>
main()
{
    int n,i,j,dem;
    printf("Nhap n="); 
    scanf("%d",&n);
    for(i=2;i<=n;i++)
    {        
        dem=0;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            dem++;
        }        
        if(dem==0)
        {
            printf("%5d",i);
        }
    }
    getch();
}
B�i 8
 
Viet chuong tr�nh t�nh:
 
S = 1+ x + 2x2 + 3x3 + ... + n xn
 
Voi x l� so thuc, n l� so nguy�n duoc nhap tu b�n ph�m.
 
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{    
    int n,i;
    float x,s=1;
    printf("Nhap x,n:");
    scanf("%f %d",&x,&n);
    for(i=1;i<=n;i++)
    {
        s=s+i*pow(x,i);        
    }
    printf(" Gia tri tinh duoc la:%0.2f ", s);
    getch();
}
B�i 9
 
Viet chuong tr�nh t�nh gi� tri cua bieu thuc sau:
 
S(n) = 1 + 3 + 5 + � +(2n+1), v?i n b?t k? nh?p t? b�n ph�m.
 
#include<stdio.h>
#include<conio.h>
main()
{
    int i,n,s=0;
    printf("Nhap n=");
    scanf("%d",&n);
    for(i=1;i<=2*n+1;i=i+2)
    {
        s=s+i;
    }
    printf("Gia tri bieu thuc la: %d ", s);
    getch();
}
B�i 10
 
Viet chuong tr�nh nhap x, y tu b�n ph�m, t�nh gi� tri cua bieu thuc sau:
 
  S = 2 x2 y + 1 -|x-1|       neu x > y
  
       = 5 x � 3 y3 x       neu x<=y
#include<stdio.h>
#include<conio.h>
#include<math.h>
main()
{
    float  x,y,s=0;
    printf("Nhap x=");
    scanf("%f",&x);
    printf("\nNhap y=");
    scanf("%f",&y) ;    
    if(x>y)
    {
        s=2*x*x*y +1-fabs(x-1) ;    
    }    
    else
    {
        s=5*x - 3*x*pow(y,3);
    }         
    printf ("\n gia tri tinh duoc la  %f",s);
    getch();
}
B�I TAP PHAN MANG 1 CHIEU b�i 11 dEn b�i 16
 
B�i 11
 
Nhap v�o 1 d�y so nguy�n. Hien thi d�y so d� ra m�n h�nh.
 
#include<stdio.h>
#include<conio.h>
main()
{    
    int a[50];
    int i,n;
    printf("Nhap so phan tu mang: ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }    
    printf("\nMang vua nhap la:");
    for(i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
    getch();
}
B�i 12
 
Nhap 1 d�y so nguy�n dua ra m�n h�nh c�c so nguy�n to c� trong mang, vi tr� c�c so d� trong mang.
 
#include<stdio.h>
#include<conio.h>
main()
{    
    int a[50];
    int i,n,j,kt;
    printf("Nhap so luong phan tu:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }    
    printf("\nCac so nguyen to co trong  mang va vi tri cac so do trong mang la:");
    for(i=0;i<n;i++)
    {
        kt=0;
        for(j=2;j<=a[i]/2;j++)
        {
            if(a[i]%j==0)
            kt=1;    
        }
        if(kt==0)
        printf("\nso nguyen to %d vi tri %d trong mang ", a[i], i );
    }
    getch();
}
B�i 13
 
Nhap 1 d�y so nguy�n kh�ng qu� 50 phan tu, in ra m�n h�nh d�y so d� nhap
 
�ua ra m�n h�nh so lon nhat c� trong d�y v� vi tr� cua n� trong d�y.
 
Sap xep d�y so theo gi� tri c�c phan tu tang dan
 
T�nh tong v� trung b�nh cong c�c so c� trong d�y.
 
#include<stdio.h>
#include<conio.h>
main()
{    
    int a[50];
    int i,n,tg,max,j,s=0; 
    printf("nhap vao so phan tu: "); 
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {        
        scanf("%d", &a[i]);
    }
    max=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max)
        {
            max =a[i];
        }
    }
    printf("\nSo lon nhat =%d",max);
    printf("\nvi tri cua gia tri lon nhat trong day la: ");
    for(i=0;i<n;i++)
    {
        if (a[i]==max)
        {
            printf("%6d", i+1);
        }
    }
//sap xep day so theo thu tu tang dan
    for(i=0;i<n-1;i++)
       for(j=i+1; j<n; j++)
       {
        if(a[i]>a[j])
          {
            tg=a[i];
             a[i]=a[j];
              a[j]=tg;
           } 
       }
    printf("\nday so sau khi sap xep la:");
       for(i=0;i<n;i++)
       {
          printf("%6d",a[i]);
    }
//Tinh tong va trung binh cong cac so trong day
    for(i=0;i<n;i++)
    {
        s=s+a[i];
       }
    printf("\nTong cac so trong day la: %d",s);
    printf("\nTrung binh cong cac so trong day la: %f", (float)s/n);
    getch();
}
 
B�i 14
 
Nhap 1 d�y n so nguy�n (0<n<30), in ra m�n h�nh d�y so d� nhap
 
�ua ra m�n h�nh c�c so chan v� vi tr� so chan d� trong d�y
 
Sap xep d�y so theo gi� tri c�c phan tu giam dan.
 
Ch�n so X v�o d�y sao cho sau khi ch�n gi� tri c�c phan tu van giam dan(x nhap tu b�n ph�m.
 
#include<stdio.h>
#include<conio.h>
main()
{ 
    int a[30],i,j, n,tg,v,x;
    printf("Nhap vao so phan tu: "); 
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
//hien thi ra man hinh day so vua nhap
    printf("day so vua nhap la:");
    for(i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
//dua ra man hinh cac so chan va vi tri trong day
    printf("\nCac so chan trong day va vi tri cac so do trong day la:");
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            printf("\nso %d dung thu %d trong day", a[i], i+1);
        }
    }
// sap xep day so theo gia tri cac phan tu giam dan
    for(i=0;i<n-1;i++)
    for(j=i+1;j<n;j++)
    {
        if(a[i]<a[j])
        {
            tg=a[i];
            a[i]=a[j];
            a[j]=tg;
        }
    }
    printf("\nDay so sau khi sap xep la:");
    for(i=0;i<n;i++)
    {
        printf("%5d",a[i]);
    }
//chen so x vao day sao cho sau khi chen gia tri cac phan tu van tang dan (x nhap tu ban phim)
    printf("\nNhap gia tri can chen X:"); 
    scanf("%d", &x);
    v=0; 
    i=0;
    while(a[i]>x)
    {    
        i++;
    } 
    v=i;    
    for(i=n-1;i>=v;i--)
    {
        a[i+1]=a[i];
    }
    a[v]=x;
    printf("\n Day so sau khi chen la:");
    for(i=0;i<n+1;i++)
    {
        printf("%5d", a[i]);
    }
    getch();
}
B�i 15
 
Nhap 1 d�y so thuc kh�ng qu� 50 phan tu, dua ra m�n h�nh tong c�c so duong trong d�y.
 
X�a tat ca c�c so �m c� trong d�y.
 
#include<stdio.h>
#include<conio.h>
main()
{
    int i, j, n,a[50],s=0;
    printf("Nhap vao so phan tu ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>0)
        {
            s=s+a[i];
        }
    }
    printf("Tong cac so duong trong day la:%d",s );
// Xoa tat ca cac so am trong day
    for(i=0;i<n;i++)
    {
        if(a[i]<0)
         {    
            for(j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            n=n-1;
        }
    }
    printf("\n Day so sau khi xoa la:");
    for(i=0;i<n;i++)
    {
        printf("%5d", a[i]);
    }
    getch();
}
B�i 16
 
Nhap 1 d�y so nguy�n kh�ng qu� 50 phan tu, dua ra m�n h�nh trung b�nh cong c�c so chia het cho 3 c� trong d�y. Ch�n so X v�o vi tr� thu k trong d�y(x,k nhap t? b�n ph�m)
 
#include<stdio.h>
#include<conio.h>
main()
{ 
    int a[50];
    int i,n,t=0,k,x,d=0;
    printf("Nhap vao so phan tu: "); 
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
// in ra man hinh trung binh cong cac so chia het cho 3 
    for(i=0;i<n;i++)
    {
        if(a[i]%3==0)
        {    
            t=t+a[i]; 
            d=d+1;
        }
    }
    if(d==0)    
    {
        printf("khong co so chia het cho 3 trong day");
    }
    else
    {
        printf("TBC so chia het cho 3 trong day la %f", (float)t/d);
    }
// chen so x vao vi tri thu k trong day
    printf("\nNhap gia tri va vi tri can chen x,k= "); 
    scanf("%d%d", &x,&k);
    for(i=n-1;i>=k;i--)
    {
        a[i+1]=a[i];
    }
    a[k]=x;
    printf("\n Day so sau khi chen la:");
    for(i=0;i<n+1;i++)
    {
        printf("%5d", a[i]);
    }
    getch();
}
B�I T?P M?NG MA TR?N ( M?NG 2 CHI?U ) b�i 17 d?n 21
 
B�i 17
 
Nh?p v�o ma tr?n nxm.
 
Hi?n th? ra ma tr?n v?a nh?p
 
#include<stdio.h>
#include<conio.h>
main()
{ 
    int a[50][50];
    int i,j,m,n;
    printf("nhap so hang n="); scanf("%d",&n);
    printf("nhap so cot m="); scanf("%d",&m);
    printf("nhap vao ma tran:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("ma tran vua nhap la:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
B�i 18
 
Nh?p v�o m?t ma tr?n n x m, in ra ma tr?n v?a nh?p du?i d?ng b?ng
 
Hi?n th? v� t�nh t?ng c�c ph?n t? tr�n h�ng ch?n c?a ma tr?n
 
Tim gi� tr? l?n nh?t tr�n c?t 1c?a ma tr?n
 
#include<stdio.h>
#include<conio.h>
main()
{
    int a[50][50];
    int i,j,m,n;
    printf("nhap so hang n="); scanf("%d",&n);
    printf("nhap so cot m="); scanf("%d",&m);
    printf("nhap vao ma tran:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
//hien thi ma tran vua nhap duoi dang bang
    printf("ma tran vua nhap la:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
// tinh tong pt tren hang chan cua mang
    float s=0;
    for(i=0;i<n;i=i+2)
    {
        for(j=0;j<m;j++)
        {
            s=s+a[i][j];
        }
    }
    printf("\nTong pt tren hang chan cua mang la: %5f",s);
// tim max tren cot 1 cua mang
    int max;
    max=a[0][0];
    for(i=1;i<n;i++)
    {
        if(a[i][0]>max)
        {
            max=a[i][0];
        }
    }
    printf("\nGia tri max tren cot 1 cua mang la %5d",max);
    getch();
}
B�i 19
 
Nh?p 2 ma tr?n m x n s? nguy�n. T�nh t?ng 2 ma tr?n
 
#include<stdio.h>
#include<conio.h>
main()
{
    int a[10][10],b[10][10],c[10][10];
    int i,j,m,n;
    printf("nhap so hang m="); scanf("%d",&m);
    printf("nhap so cot n="); scanf("%d",&n);
    printf("nhap vao ma tran:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
     for(i=0;i<m;i++)
     {
        for(j=0;j<n;j++)
              {
            c[i][j]=a[i][j]+b[i][j];
        }
    }    
    printf("\nMa tran sau cong:\n");
    for(i=0;i<m;j++)
    {    
        for(j=0;j<n;j++)
        {
            printf("%5d",c[i][j]);
        }
        printf("\n");
    }
    getch();
}
 
B�i 20
 
Nh?p ma tr?n n x n s? nguy�n. T�m ph?n t? l?n nh?t tr�n du?ng ch�o ch�nh.
 
Ki?m tra ma tr?n v?a nh?p xem c� ph?i l� ma tr?n don v? kh�ng
 
#include<stdio.h>
#include<conio.h>
main()
{
    int a[10][10];
    int i,j,n, max;
    printf("Nhap n= ");
    scanf("%d", &n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
          {
            scanf("%d",&a[i][j]);
        }
    }
//tim phan tu lon nhat tren duong cheo chinh
    max=a[0][0];
    for(i=0;i<n;i++)
    {
        if(a[i][i]>max)
        {
            max=a[i][i];
        }
    }    
    printf("\ngia tri lon nhat tren duong cheo chinh la %d", max);
// kiem tra ma tran vua nhap co phai ma tran don vi
    int kt=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(((i==j)&&(a[i][j]!=1))||((i!=j)&&(a[i][j]!=0)))
            {
                kt=1;
            }
        }
    }
    if(kt==0)
    {
        printf("\nla ma tran don vi");
    }
    else        
    {
        printf("\nkhong phai la ma tran don vi");
    }
    getch();
}
B�i 21
 
Nh?p v�o m?t ma tr?n n x m, in ra ma tr?n v?a nh?p du?i d?ng b?ng
 
S?p x?p h�ng 2 theo chi?u gi� tr? c�c ph?n t? gi?m d?n.
 
�ua ra m�n h�nh t?ng c�c ph?n t? trong ma tr?n
 
Tim gi� tr? l?n nh?t trong m?ng.
 
T�m gi� tr? nh? nh?t chia h?t cho 3 c� trong m?ng
 
#include<stdio.h>
#include<conio.h>
main()
{ 
    int a[50][50];
    int m,n,i,j;
    printf("nhap so hang n="); scanf("%d",&n);
    printf("nhap so cot m="); scanf("%d",&m);
    printf("nhap vao ma tran:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
// in ra ma tran vua nhap duoi dang bang
    printf("ma tran vua nhap la:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",a[i][j]);
        }
    printf("\n");
    }
//sap xep hang 2 trong mang theo chieu giam dan
    int tg,k;
    for(j=0;j<m-1;j++)
    {
        for(k=j+1;k<m;k++)
        {
            if(a[1][j]<a[1][k])
            {    
                tg=a[1][j];
                a[1][j]=a[1][k];
                a[1][j]=tg;
            }
        }
    }
    printf("\nma tran vua sap xep hang 2 la\n");
    for(j=0;j<m;j++)
    {
        printf("%5d",a[1][j]);
    }
// Dua ra man hinh tong cac phan tu ma tran
    int s=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            s=s+a[i][j];
        }
    }    
    printf("\ntong cac phan tu la: %d",s);
// gia tri nho nhat chia het cho 3 trong mang
    int min, kt=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i][j]%3==0)
            {    
                min=a[i][j];
                kt=1;
                break;
            }
        }
    }
    if(kt==1)
    {
        for(i=0;i<n;i++)
        {
            for(j=0; j<m; j++)
            {
                if((a[i][j]%3==0)&&(a[i][j]<min))
                {
                    min=a[i][j];
                }
            }
        }
    printf("\nso nho nhat trong cac so chia het cho 3 co trong day la %d", min);
    }
    else    
    {
        printf(" trong mang vua nhap khong co so chia het cho 3");
    }
    getch();
	return 0;
}
