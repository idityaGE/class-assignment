#include <stdio.h>
#include <math.h>

//An Armstrong number is a number that is the sum of its own digits each raised to the power of the number of digits e.g. 153 = 1^3 + 5^3 + 3^3
int isArmstrong(int num)
{
    int originalNum, remainder, result = 0, n = 0;

    originalNum = num;

    // count the number of digits
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }

    originalNum = num;

    // calculate the result
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // check if the number is Armstrong
    if (result == num)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}