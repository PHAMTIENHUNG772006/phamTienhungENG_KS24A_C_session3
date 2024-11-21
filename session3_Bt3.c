#include <stdio.h>

int main() {
    float celsius, fahrenheit;
    printf("nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);
    fahrenheit = (celsius * 9/5) + 32;
    printf("%.2f do Celsius = %.2f do fahrenheit\n", celsius, fahrenheit);

    return 0;
}
