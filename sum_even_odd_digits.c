#include <stdio.h>

int main()
{
    int num, digit;
    int even_sum = 0;
    int odd_sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0)
    {
        digit = num % 10;

        if (digit % 2 == 0)
        {
            even_sum = even_sum + digit;
        }
        else
        {
            odd_sum = odd_sum + digit;
        }

        num = num / 10;
    }

    printf("Sum of even digits = %d\n", even_sum);
    printf("Sum of odd digits = %d", odd_sum);

    return 0;
}
