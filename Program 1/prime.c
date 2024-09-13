#include<stdio.h>

int main(){
    int n;
    printf("Enter any number:");
    scanf("%d",&n);
    if(n==0 || n==1){
        printf("It is prime number");
    }
    for(int i=2;i<=n/2 ; i++){
        if(n%i==0){
             printf("It is composite number");
             break;
        }else{
             printf("It is prime number");
             break;
        }
    }
}