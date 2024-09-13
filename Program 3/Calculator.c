#include<stdio.h>
#include<stdlib.h>

int main(){
    char ch;
    int num1,num2;
    
    while (1)
    {
        printf("Enter any operation:(*,+,-,/) and x for exit: ");
        scanf(" %c",&ch);
        
        if (ch == 'x'){
            exit(0);
        }
        printf("Enter two number for calculation: ");
        scanf("%d %d", &num1 ,&num2);
        switch(ch){
            case '*': printf("The result is:  %d\n", num1*num2);
            break;

            case '+': printf("The result is:  %d\n", num1+num2);
            break; 

            case '-': printf("The result is:  %d\n", num1-num2);
            break;

            case '/': printf("The result is:  %.2f\n", (float)num1/num2);
            break;
            default: printf("Invalid operation\n");
        }
    } 
    return 0;
}