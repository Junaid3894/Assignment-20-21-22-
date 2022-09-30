/*10. Write a program to print a string in reverse using a pointer*/

#include<stdio.h>
void reverse(char *ptr,int length){
    char temp;
    for(int i=0;i<length/2;i++){
        temp=ptr[i];
        ptr[i]=ptr[length-i-1];
        ptr[length-i-1]=temp;
    }
}
int main()
{
char str[]={"Junaid"};
reverse(str,6);
// Finally printing the reversed string 
    printf("%s",str);
return 0;
}
