#include<stdio.h>

int fib(int n){
    if (n==1 )
    {
        return 0;
    }else if(n==2){
        return 1;
    }
    return fib(n-1)+fib(n-2);
}

int main(){
    int n,ans;
    printf("Enter any number:");
    scanf("%d",&n);
    for (int i = 1; i < n+1; i++)
    {
    ans = fib(i);
    printf("%3d\n",ans);
    }
    
    return 0;
}