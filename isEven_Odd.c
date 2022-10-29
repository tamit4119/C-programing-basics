//code to check if number is even or odd
#include<stdio.h>

int main()
{
    int num;
    
    printf("Enter number: ");
    scanf("%d", &num);
    
    if(num % 2 == 0){
        printf("Even");
    }
    else{
        printf("Odd");
    }
    
    return 0;
}
