/*5. Write a program to find the maximum number between two numbers using a pointer*/

#include<stdio.h>
int main()
{
int a=10,b=5;
int *pa,*pb;
pa=&a;
pb=&b;
if(*pa>*pb){
    printf("Your greater number is %d",*pa);
}
else{
    printf("Your greater number is %d",*pb);
}
return 0;
}
