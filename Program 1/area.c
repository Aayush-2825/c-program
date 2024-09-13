#include<stdio.h>
#include<math.h>

int main(){
    
    int a,r;
    printf("Enter side of square & radius of circle respectively:-");
    scanf("%d %d",&a , &r);
    printf("Area of square is: %d\n Area of Circle is: %f", a*a,(float)3.14*pow(r,2));
    // printf("Enter radius of cricle:");
    // scanf('%d',&r);
    // printf("Area of circle is: %d",3.14*r*r );
    return 0;
}