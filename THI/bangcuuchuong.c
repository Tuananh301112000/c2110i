#include <stdio.h>
 
int main(){
	int i,j;
    printf("\n-------CHUONG TRINH IN BANG CUU CHUONG-------\n");
    
    for( i = 1; i <= 10;i++){
        printf("\n--------BANG NHAN %d--------\n", i);
        for(j = 0; j < 10; j++){
            printf("\t%d x %d = %d\n", i, j, i*j);
        }
    }
    return 0;
}
