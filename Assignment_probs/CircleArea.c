#include <stdio.h>

int main()
{
    float radius , area , circumference;
    float pi = 3.14;

    printf("Enter the radius of the circle :");
    scanf("%f",&radius);
    area = pi*(radius)*(radius);
    printf("area of the circle is %f\n",area);
    circumference = 2*pi*radius;
    printf("circumference of the circle is %f", circumference);
    
    
}
