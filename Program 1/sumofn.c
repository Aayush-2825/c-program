#include<stdio.h>

int main(){
    int n;
    printf("Enter number to sum:");
    scanf("%d",&n);
    printf("%d", (n*(n+1))/2);
    return 0;
}