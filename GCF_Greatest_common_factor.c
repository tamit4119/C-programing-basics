#include<stdio.h>
int main (){
	int n,m,p,i,h;
	printf("Enter 1st Number : ");
	scanf("%d",&n);                             //input
	printf("Enter 2nd Number : ");
	scanf("%d",&m);
	
	p=(n>m)?n:m;
	for(i=1;i<=p;i++){                          //execution
		if(n%i==0 && m%i==0){
			h=i;
		}
    }
	printf("Greatest Common Fcator is : %d",h);
   return 0 ;
}
