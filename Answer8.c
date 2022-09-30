/*8. Write a program to compute the sum of all elements in an array using pointers.*/

#include<stdio.h>
void sum_array(int *,int );
int main()
{
int size;
printf("Enter the size of the array :");
scanf("%d",&size);
int arr[size];
for(int i=0;i<size;i++){
    scanf("%d",arr+i);
}
sum_array(arr,size);
return 0;
}
void sum_array(int *ptr,int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum+=  *(ptr+i);
    }
    printf("Sum of all the elements are %d",sum);
}
