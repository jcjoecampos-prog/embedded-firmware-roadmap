#include <stdio.h>

int main(void)
{
    float voltage = 24.0f;
    float current = 4.5f;

    float power = voltage * current;

    printf("Voltage: %.2f V\n", voltage);
    printf("Current: %.2f A\n", current);
    printf("Power: %.2f W\n", power);

    if (current <= 3.0f)
    {
        printf("SYSTEM NORMAL\n");
    }

    else
    {
        printf("WARNING: OVERCURRENT\n");
    }

    return 0;

}