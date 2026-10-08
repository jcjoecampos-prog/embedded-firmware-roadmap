
#include <stdio.h>

int main(void)
{
    float current = 2.5f;
    float *current_ptr = &current;

    printf("Current: %.2f A\n", current);
    printf("Address: %p\n", (void *)current_ptr);
    printf("Value through pointer: %.2f A\n", *current_ptr);

    *current_ptr = 4.5f;

    printf("Updated current: %.2f A\n", current);
    printf("Updated pointer value: %.2f A\n", *current_ptr);

    return 0;
}
