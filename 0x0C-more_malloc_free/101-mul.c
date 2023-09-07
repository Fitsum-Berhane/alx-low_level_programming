#include <stdio.h>
#include <stdlib.h>

int _isdigit(char *str);
void multiply(char *num1, char *num2);

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Argument vector
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char *argv[])
{
    if (argc != 3 || !_isdigit(argv[1]) || !_isdigit(argv[2]))
    {
        printf("Error\n");
        return 98;
    }

    multiply(argv[1], argv[2]);

    return 0;
}

/**
 * _isdigit - Checks if a string contains only digits
 * @str: String to check
 *
 * Return: 1 if all characters are digits, 0 otherwise
 */
int _isdigit(char *str)
{
    int i = 0;

    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            return 0;
        i++;
    }

    return 1;
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: First number as string
 * @num2: Second number as string
 */
void multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j, carry, n1, n2, sum;
    int *result;

    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    result = malloc(sizeof(int) * (len1 + len2));
    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    for (i = 0; i < (len1 + len2); i++)
        result[i] = 0;

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        n1 = num1[i] - '0';

        for (j = len2 - 1; j >= 0; j--)
        {
            n2 = num2[j] - '0';
            sum = (n1 * n2) + result[i + j + 1] + carry;
            carry = sum / 10;
            result[i + j + 1] = sum % 10;
        }

        if (carry > 0)
            result[i + j + 1] += carry;
    }

    i = 0;
    while (result[i] == 0 && i < (len1 + len2 - 1))
        i++;

    for (; i < (len1 + len2); i++)
        printf("%d", result[i]);
    printf("\n");

    free(result);
}
