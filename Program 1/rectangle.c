#include<stdio.h>

int main(){
    int l,b,area,perimeter;
    printf("Enter length and breadth of rectangle respectively:-");
    scanf("%d %d",&l , &b);
    area = l*b;
    perimeter = 2*(l+b);
    printf("Area of given rectangle is: %d \n",area);
    printf("Perimeter of given rectangle is: %d",perimeter);
    return 0;
}