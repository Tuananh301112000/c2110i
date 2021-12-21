#include<stdio.h>

int main()
{
	float a,b,c,x;
	printf("nhap he so a:");
	scanf("%f",&a);
		printf("nhap he so b:");
	scanf("%f",&b);
		printf("nhap he so c:");
	scanf("%f",&c);
	if(a==0)
	{
		if(b==0&&c==0)
			printf("phuong trinh vo so nghiem");
		else if(b==0&&c!=0)
		printf("phuong trinh co nghiem x=0");
		else 
		{
			printf("phuong trinh co nghiem la: %f",-c/b);
			
		}
		
	}
	else {
		float d;
		d=b*b-4*a*c;
		if(d<0)
		printf("phuong trinh vo nghiem");
		else if(d==0)
		printf("phuong trinh co nghiem kep x= %f",-b/(2*a));
		else{
			printf("phuong trinh co 2 nghiem x1=%f va x2=%f",((-b-sqrt(d))/(2*a)),((-b+sqrt(d))/(2*a)));
			
			
		}
		
	}
	return 0;
}



