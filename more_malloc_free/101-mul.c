#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/* Function to multiply two numbers represented as strings */
char *multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0;
    int i, j, mul, sum;
    int *result;
    char *result_str;
    int index;

    /* Find the length of both numbers */
    while (num1[len1] != '\0')
        len1++;
    while (num2[len2] != '\0')
        len2++;

    result = (int *)calloc(len1 + len2, sizeof(int));
    if (!result)
        return (NULL);

    /* Multiply the numbers */
    for (i = len1 - 1; i >= 0; i--)
    {
        for (j = len2 - 1; j >= 0; j--)
        {
            mul = (num1[i] - '0') * (num2[j] - '0');
            sum = result[i + j + 1] + mul;
            result[i + j + 1] = sum % 10;
            result[i + j] += sum / 10;
        }
    }

    /* Convert result to a string */
    result_str = (char *)malloc((len1 + len2 + 1) * sizeof(char));
    if (!result_str)
    {
        free(result);
        return (NULL);
    }

    index = 0;
    while (index < len1 + len2 && result[index] == 0)
        index++;

    if (index == len1 + len2)
    {
        result_str[index] = '0';
        index++;
    }

    for (i = index; i < len1 + len2; i++)
        result_str[i] = result[i] + '0';

    result_str[len1 + len2] = '\0';
    free(result);
    return (result_str);
}

/* Main function to handle the input and call the multiply function */
int main(int argc, char *argv[])
{
    int i;
    char *num1, *num2, *result;

    if (argc != 3)
    {
        printf("Error\n");
        exit(98);
    }

    num1 = argv[1];
    num2 = argv[2];

    /* Check if both num1 and num2 are valid numbers */
    for (i = 0; num1[i] != '\0'; i++)
    {
        if (num1[i] < '0' || num1[i] > '9')
        {
            printf("Error\n");
            exit(98);
        }
    }

    for (i = 0; num2[i] != '\0'; i++)
    {
        if (num2[i] < '0' || num2[i] > '9')
        {
            printf("Error\n");
            exit(98);
        }
    }

    result = multiply(num1, num2);
    if (result == NULL)
    {
        printf("Error\n");
        exit(98);
    }

    printf("%s\n", result);
    free(result);
    return (0);
}
