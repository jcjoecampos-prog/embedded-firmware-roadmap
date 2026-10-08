#include <stdio.h>
#define OVERCURRENT_LIMIT_A 3.0f

float calculate_power(float voltage, float current)
{
    return voltage * current;
   
}

int check_overcurrent(float current)
{
    return current > OVERCURRENT_LIMIT_A;
}

void display_measurements(
    const float *voltage,
    const float *current,
    const float *power
)

{
    printf("Voltage: %.2f V\n", *voltage);
    printf("Current: %.2f A\n", *current);
    printf("Power: %.2f W\n", *power);

}

int main(void)
{
    float voltage = 24.0f;
    float current = 4.5f;

    float power = calculate_power(voltage, current);

    display_measurements(&voltage, &current, &power);

    if (check_overcurrent(current))
    {
        printf("WARNING: OVERCURRENT\n");
    }

    else
    {
        printf("SYSTEM NORMAL\n");
    }

    return 0;
}

