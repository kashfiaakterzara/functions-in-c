#include <stdio.h>


double celsius_to_fahrenheit(double c);

double celsius_to_fahrenheit(double c)
{
    return (9.0 / 5.0) * c + 32;
}

int main()
{
    double celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = celsius_to_fahrenheit(celsius);

    printf("%.2lf degrees Celsius is %.2lf degrees Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}