#include<stdio.h>
#include<math.h>

int main(){
    int num,remainder,temp,new_num=0;
    printf("Enter any number:");
    scanf("%d",&temp);
    num = temp;
    for (int i = 0; i < 10; i++)
    {
    
   do
    {
        remainder = temp%10;
        new_num = new_num + pow(remainder,i);
        temp = temp/10;
    }while (temp != 0);
   new_num = 0;
   num = temp;
   if (new_num == num)
    {
        printf("It is an Armstrong Number!");
        break;
    }else{
         printf("No it is an Armstrong Number!");
    }
    
    }
   
}
