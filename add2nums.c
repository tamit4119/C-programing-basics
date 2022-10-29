//program to add 2 numbers
#include <stdio.h>

int main() 
{    
    int number1, number2, sum;

    printf("Enter two integers: ");
    scanf("%d %d", &number1, &number2);

    // calculating sum
    sum = number1 + number2;      

    //printing sum
    printf("Sum is = %d", sum);

    return 0;
}
