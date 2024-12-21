// Q1 . WAP to find sum of 1 to 10 number using UDF
#include <stdio.h>

void sum_of_numbers()
{
    int start = 1, end = 10;
    int sum = (start, end);
    printf("The sum of numbers from %d to %d is: %d\n", start, end, sum);
}

int sum(int start, int end)
{
    int total = 0;
    for (int i = start; i <= end; i++)
    {
        total += i;
    }
    return total;
}

int main()
{
    sum_of_numbers();
    return 0;
}
