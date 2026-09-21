#include <stdio.h>

int main(){
    float Fahrenheit;
    float Celsius;

    printf("Enter Temperature in Fahrenheit");
    scanf("%f", &Fahrenheit);

    Celsius=(Fahrenheit-32)*5/9

    printf("Temperature in Celsius: %.2f\n", Celsius);

    return 0;
}