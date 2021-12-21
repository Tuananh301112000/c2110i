#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
	int i,n,j,tg,max,s=0;
	int a[50];
	printf("\nNhap = ");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	max = a[0];
	for(i=1;i<n;i++)
	{
		if(a[i]>max)
		{
			max = a[i];
		}
	}
	printf("\nSo lon nhat la:%d",max);
	printf("\nVi tri cua gia tri lon nhat trog day la: ");
	for(i=0;i<n;i++)
	{
		if(a[i]==max)
		{
			printf("%d",i+1);
		}
	}
	for(i=0;i<n;i++)
	for(j=i+1;j<n;j++)
	{
		if(a[i]>a[j])
		{
			tg=a[i];
		    a[i]>a[j];
		    a[j]=tg;
		}
	}
	printf("\nDay so sau khi sap xep la:");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	for(i=0;i<n;i++)
	{
		s=s+a[i];
	}
	printf("\nTong cac so trong day la: %d",s);
	printf("\nTrung binh cong cac so trong day la: %f",(float)s/n);
	
	return 0;
}
