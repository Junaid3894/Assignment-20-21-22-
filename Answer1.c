/*1. Write a function to swap values of two in variables of calling function. (TSRS)*/
#include<stdio.h>

void swap(int *,int *);
int main()
{
int a=5;
int b=10;
swap(&a,&b);
printf("Value of a after swapping :%d\n",a);
printf("Value of b after swapping :%d",b);
return 0;
}
void swap(int *x,int *y){
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
