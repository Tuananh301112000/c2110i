#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
	int n,i,a,b,k;
	printf("\nNhap n:");
	scanf("%d", &n);
	for(i=1;i<=n-1;i++) printf(" ");
	printf("*\n");
	for(i=1;i<=n-2;i++) printf(" ");
	printf("**\n");
	
	k=1;
	while(k<=n-3)
	{
	 a=n-2-k;
	for(i=1;i<=a;i++) printf(" ");
     printf("*");
     b=k;
     for(i=1;i<=b;i++) printf(" ");
     printf("*\n");
     k++;
    }
     
     
     a=n-4;
	for(i=1;i<=a;i++) printf(" ");
     printf("*");
     b=2;
     for(i=1;i<=b;i++) printf(" ");
     printf("*\n");
     
	return 0;
}
