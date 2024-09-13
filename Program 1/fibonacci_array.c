#include<stdio.h>


int main(){
   int arr[45], size ;
   printf("Enter any number:");
   scanf("%d",&size);
   for (int i = 0; i < size; i++)
   {
    if (i == 0)
    {
        arr[i]= 0;
        printf("%4d\n",arr[i]);
    }else if(i == 1){
        arr[i] = 1;
        printf("%4d\n",arr[i]);
    }else{
        arr[i] = arr[i-1] + arr[i-2];
        printf("%4d\n",arr[i]);
    }
   }
}

