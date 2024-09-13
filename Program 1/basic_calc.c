#include<stdio.h>

int main(){
    int a,b,add,multiply,substract;
    float divide;
    printf("Enter any two numbers:-");
    scanf("%d %d",&a,&b);
    add= a + b;
    multiply = a*b;
    substract = a-b;
    divide = (float)a/b;
    printf("Sum of two numbers is: %d\n",add);
    printf("Difference of two numbers is: %d\n",substract);
    printf("product of two numbers is: %d\n",multiply);
    printf("divide of two numbers is: %f\n",divide);
}