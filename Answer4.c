/*4. Write a program in C to demonstrate how to handle the pointers in the program.*/

#include<stdio.h>
int main()
{
int* pc, c;
c = 5;
pc = &c;
printf("%d", *pc);   // Output: 5

return 0;
}
