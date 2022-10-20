#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");  //asking input from user for no. of rows
   scanf("%d", &rows);
   for (i = 1; i <= rows; i++) {
      for (j = 1; j <= i; j++) {
         printf("* ");
      }
      printf("\n");
   }
   return 0;
}
