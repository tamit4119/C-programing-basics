#include <math.h>
#include <stdio.h>

int main() {
   int num, num1, remainder, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   num1 = num;

   // store the number of digits of num in n
   for (num1 = num; num1 != 0; ++n) {
       num1 /= 10;
   }

   for (num1 = num; num1 != 0; num1 /= 10) {
       remainder = num1 % 10;

      // store the sum of the power of individual digits in result
      result += pow(remainder, n);
   }

   // if num is equal to result, the number is an Armstrong number
   if ((int)result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}
