#include <stdio.h>

int main()
{
    int n, number, divisor;
    int sum = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    printf("Enter the divisor: ");
    scanf("%d", &divisor);

    if (divisor == 0)
    {
        printf("Divisor cannot be zero.");
        return 0;
    }

    for (int i = 1; i <= n; i++)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &number);

        if (number % divisor == 0)
        {
            sum = sum + number;
        }
    }

    printf("Sum of divisible numbers = %d", sum);

    return 0;
}
