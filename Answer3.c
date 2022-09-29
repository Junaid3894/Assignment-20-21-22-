/*3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]*/
#include<stdio.h>

void sort(int *ptr,int size);
int main()
{
int size=5;
int arr[5]={12,34,45,56,53};
sort(arr,size);
for(int i=0;i<size;i++){
    printf("%d\t",arr[i]);
}
return 0;
}
void sort(int *ptr,int size){
    int temp;
    for(int i=0;i<size;i++){
        for(int j=i+1;j<size-1;j++){
            if(*(ptr+i)>*(ptr+i)){
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
}
