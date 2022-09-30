/*9. Write a program to print the elements of an array in reverse order.*/

#include<stdio.h>
void reverse(int *ptr,int size){
    int temp;
    for(int i=0;i<size/2;i++){
        temp=ptr[i];
        ptr[i]=ptr[size-i-1];
        ptr[size-i-1]=temp;
    }
}
int main()
{
int arr[]={1,2,3,4,5};
reverse(arr,5);
// Finally printing the reversed array 
for(int i=0;i<5;i++){
    printf("%d\t",*(arr+i));
} 
return 0;
}
