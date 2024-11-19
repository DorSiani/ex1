/******************
Name: ID:
Assignment:
*******************/
#include <stdio.h>

// REMIDER : YOU CANT USE ANY CONTROL FLOW OPERATIONS OR FUNCTIONS, ONLY BITWISE.

int main() {
  
  // What bit
  printf("What bit:\n");
  int num1, pos1;

  printf("Please enter a number:\n");
  scanf("%d", &num1);
  printf("Please enter a position:\n");
  scanf("%d", &pos1);
  int result = (num1 >> pos1) & 1;
  printf("The bit in position %d of the number %d is: %d\n\n", pos1, num1, result);
  
  
  // Set bit
  printf("\nSet bit:\n");
  int num2, pos2;
  printf("Please enter a number:\n");
  scanf("%d", &num2);
  printf("Please enter a position:\n");
  scanf("%d", &pos2);
  int num_with_0 = num2 & (255 - (1<<pos2));
  int num_with_1 = num_with_0 + (1<<pos2);
  printf("Number with bit %d set to 1: %d\n", pos2, num_with_1);
  printf("Number with bit %d set to 0: %d\n\n", pos2, num_with_0);


  // Toggle bit
  printf("\nToggle bit:\n");
  int num3, pos3;
  printf("Please enter a number:\n");
  scanf("%d", &num3);
  printf("Please enter a position:\n");
  scanf("%d", &pos3);
  int value = num3 ^ (1<<pos3);
  printf("Number with bit %d toggled: %d\n\n", pos3, value);
  

  // Even - Odd
  printf("\nEven - Odd:\n");
  int num4;
  printf("Please enter a number:\n");
  scanf("%d", &num4);
  printf("%d\n\n", !num4&1);
  
  // 3, 5, 7, 11
  printf("\n3, 5, 7, 11:\n");
  int num51,num52,sum;
  printf("Please enter the first number(octal):\n");
  scanf("%o", &num51);
  printf("Please enter the second number(octal):\n");
  scanf("%o", &num52);
  sum = num51 + num52;
  printf("The sum in hexadecimal: %X\n", sum);
  printf("The 3,5,7,11 bits are: %d%d%d%d\n\n", (sum&8)&&1, (sum&32)&&1, (sum&128)&&1, (sum&2048)&&1);

  printf("Bye!\n");
  
  return 0;
}
