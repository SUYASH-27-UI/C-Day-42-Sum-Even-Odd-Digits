# C-Day-42-Sum-Even-Odd-Digits
# C Day 42 - Sum of Even and Odd Digits

This program calculates the sum of even digits and odd digits separately from a given number.

## Example

Input:

```text
58321
```

Output:

```text
Sum of even digits = 10
Sum of odd digits = 9
```

## Concepts Used

* while loop
* if-else
* Modulus operator (%)
* Division operator (/)
* Digit extraction
* Variables
* Addition

## How It Works

1. Extract the last digit using `% 10`.
2. Check whether the digit is even or odd.
3. Add the digit to the appropriate sum.
4. Remove the last digit using `/ 10`.
5. Repeat until all digits are processed.
6. Print the sums of even and odd digits.

## C Code

```c
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
```

## Output

```text
Enter a number: 58321
Sum of even digits = 10
Sum of odd digits = 9
```
