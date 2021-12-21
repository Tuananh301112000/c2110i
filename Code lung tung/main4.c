#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int a;
	float chieu_dai,chieu_rong,ban_kinh;
	float pi=3.14;
	printf("menu\n");
	printf("1:tinh chu vi hinh chu nhat\n");
	printf("2:tinh dien tich chu nhat\n");
	printf("3:tinh chu vi hinh tron\n");
	printf("4:tinh dien tich hinh tron\n");
	printf("5:Thoat\n :");
	printf("nhap lua chon cua ban\n :");
	
	scanf("%d",&a);
	switch(a){
		case 1:{
			
			printf("nhap chieu rong:\n :");
			scanf("%f",&chieu_rong);
			printf("nhap chieu dai:\n :");
			scanf("%f",&chieu_dai);
			printf("\nchu vi chu nhat la:=%f",(chieu_rong+chieu_dai)*2);
			
			
			break;
		}
			case 2:{
					
			printf("nhap chieu rong:\n :");
			scanf("%f",&chieu_rong);
			printf("nhap chieu dai:\n :");
			scanf("%f",&chieu_dai);
			printf("\ncdien tich chu nhat la:=%f",(chieu_rong*chieu_dai));
			
				break;
			}
			case 3:{
					printf("nhap ban kinh:\n :");
			scanf("%f",&ban_kinh);
			printf("\nchu vi hinh tron la:=%f",(ban_kinh*2*pi));
			
				break;
			}	
		case 4:{
				printf("nhap ban kinh:\n :");
			scanf("%f",&ban_kinh);
			printf("\ndien tich hinh tron la:=%f",(ban_kinh*ban_kinh*pi));
			break;
		}
		default:{
			printf("nhap sai");
			break;
		}
		case 5:{
			printf("thoat\n");
			break;
		}
	}
	
	
	return 0;
}
