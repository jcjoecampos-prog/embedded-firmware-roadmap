#include <stdio.h>

float calculate_power(float voltage, float current)
{
    return voltage * current;
   
}

int check_overcurrent(float current)
{
    if (current > 3.0f) 
    {
        printf("WARNING: OVERCURRENT\n");
        return 1;
    }

    else 
    {
        printf("SYSTEM NORMAL\n");
        return 0;
    }
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

int main()
{
    float voltage = 24.0f;
    float current = 4.5f;

    float power = calculate_power(voltage, current);

    display_measurements(&voltage, &current, &power);

    check_overcurrent(current);

    return 0;
}

