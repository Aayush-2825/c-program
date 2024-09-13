#include<stdio.h>
#include <ctype.h>

int main(){
    char ch;
    printf("Enter any alphabet:");
    scanf("%c",&ch);
    ch = tolower(ch);
    if (ch == 'a' || ch =='e' || ch =='i' || ch =='o' || ch =='u')
    {
        printf("It is vowel");
    }else{
        printf("It is consonant");
    }
    return 0;
}