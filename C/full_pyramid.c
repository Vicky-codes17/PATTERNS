#include <stdio.h>

void main() {
   int i, space, rows, num = 0;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   for (i = 1; i <= rows; ++i, num = 0) {
      for (space = 1; space <= rows - i; ++space) {
         printf("  ");
      }
      while (num!= 2 * i - 1) {
         printf("* ");
         ++num;
      }
      printf("\n");
   }
}
