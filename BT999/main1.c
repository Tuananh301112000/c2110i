#include <stdio.h>
void printTriangle(int n){
	int i,j;
	if(n>=1){
		for(i=1;i<=n;i++){
			for(j=1;j<i;j++)
		printf(" ");
		for(j=i;j<=n;j++)
		printf("# ");
		printf("\n");
	
		}
		
	}
}

int main(){
	printf("\nTest Triangle");
	printTriangle(0);
	printTriangle(7);
	
	return 1;
}
