#include<stdio.h>

#define PI 3.14159

double circle_area(double r);

int main() {
   double radius, area;

   printf("Enter the radius: ");
   scanf("%lf", &radius);

   area = circle_area(radius);

   printf("The area of the circle is %.6lf", area);

   return 0;

}

double circle_area(double r)
{
   return PI*r*r;

}