#include <stdio.h>
int main()
{
    
    float a,b;
    printf("\nenter any number");
    scanf("%f",&a);
    b=square(a);
    printf("\nsquare of %f",a,b);

    
}square(float x){
    float y;
    y=x*x;
    return (y);
}