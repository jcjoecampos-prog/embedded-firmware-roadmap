#include <stdio.h>

void update_current(float *current)
{
    *current = 4.5f;
}

int main()
{
    float current = 2.5f;

    printf("Before: %.2f A\n", current);

    update_current(&current);

    printf("After: %.2f A\n", current);

    return 0;
}