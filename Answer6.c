/*6. Write a program to calculate the length of the string using a pointer*/

#include<stdio.h>
int main()
{
char str[20]="Junaid";
char *pstr=str;
int length=0;
// Logic to find length using pointer
for(int i=0;pstr[i];i++){
    length++;
} 
printf("Your length of string is %d",length);

return 0;
}
