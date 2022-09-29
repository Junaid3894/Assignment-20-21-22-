/*2. Write a function to swap strings of two char arrays of calling functions. (TSRS)*/

#include<stdio.h>
#include<string.h>
void swap_string(char*,char*);
int main()
{
char str1[20]="Junaid";
char str2[20]="Khan";
swap_string(str1,str2);
printf("Your strings after swapping are :\n");
printf("String 1st becomes %s\n",str1);
printf("String 2nd becomes %s",str2);
return 0;
}
void swap_string(char* str1,char* str2){
    char temp[20];
    strcpy(temp,str1);
    strcpy(str1,str2);
    strcpy(str2,temp);
}
