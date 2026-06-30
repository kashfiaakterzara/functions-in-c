#include <stdio.h>
#include <math.h>


double calculate_distance(double x1, double y1, double x2, double y2);


double calculate_distance(double x1, double y1, double x2, double y2)
{
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main()
{
    double x1, y1, x2, y2, distance;

    printf("Enter coordinates for Point 1 (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    printf("Enter coordinates for Point 2 (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    distance = calculate_distance(x1, y1, x2, y2);

    printf("The distance between points is %lf\n", distance);

    return 0;
}