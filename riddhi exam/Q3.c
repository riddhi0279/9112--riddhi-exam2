#include <stdio.h>

int main()
{
    int a = 100, b = 9;

    do
    {
        // Print the current value of a and b
        printf("%d %d ", a, b);

        // Update the values of a and b
        a -= 10;
        b -= 1;

    } while (a >= 20);

    return 0;
}
