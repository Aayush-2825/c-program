#include<stdio.h>

int main(){
    int num,new_num = 0,temp,remainder;
    printf("Enter any number:");
    scanf("%d",&temp);
    num = temp;
    do
    {
        remainder = temp%10;
        new_num = new_num*10 + remainder;
        temp = temp/10;
    }while (temp != 0);
    if (num == new_num)
    {
        printf("true");
    }else{
        printf("false");
    }
    return 0;
    
}