#include<stdio.h>

int main(){
	int n=5,i,k,j;
	
	for(i=n;i>=1;i--){  //outer loop
		
		for(k=n-1;k>=i;k--){
			printf(" ");     //spacing
		}
			
		for(j=i;j>=1;j--){  //inner loop
			printf("* ");
		}
		printf("\n");
		
		
	
		
	}
	return 0;
} 
