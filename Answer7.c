/*7. Write a program to count the number of vowels and consonants in a string using a
pointer.*/

#include<stdio.h>
int main()
{
char *str="Junaid khan";
int length=0;
// logic to find length of the string
for(int i=0;*(str+i);i++){
    length++;
}
int count_vowels=0;
int count_consonants=0;
for(int i=0;i<length;i++){
    if(str[i]=='a' || str[i]=='e' || str[i]=='i' || str[i]=='o' || str[i]=='u' || str[i]=='A' || str[i]=='E' || str[i]=='I' || str[i]=='O' || str[i]=='U'){
        count_vowels++;
    }

    else{
        count_consonants++;
    }
}
printf("String contains %d vowels and %d consonants ",count_vowels,count_consonants-1);
return 0;
}
