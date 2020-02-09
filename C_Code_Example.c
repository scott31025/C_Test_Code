#include <stdio.h>

int main(void)
{
   int num1, num2;

   printf("Please enter first number:\n");

   scanf("%d", &num1);

   printf("Please enter second number:\n");

   scanf("%d", &num2);

   printf("Sum is %d.\n", num1+num2);

   system("pause");
   return 0;
}
