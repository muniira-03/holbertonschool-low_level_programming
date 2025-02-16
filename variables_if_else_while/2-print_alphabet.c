#include <stdlib.h>
#include <time.h>
#include <unistd.h>

int main(void)
{
    int n, last_digit;
    char msg1[] = "Last digit of ";
    char msg2[] = " is ";
    char msg3[] = " and is greater than 5\n";
    char msg4[] = " and is 0\n";
    char msg5[] = " and is less than 6 and not 0\n";
    char num_str[12];

    srand(time(0));
    n = rand() - RAND_MAX / 2;
    last_digit = n % 10;

    write(1, msg1, sizeof(msg1) - 1);
    
    sprintf(num_str, "%d", n);
    write(1, num_str, sizeof(num_str) - 1);
    
    write(1, msg2, sizeof(msg2) - 1);

    sprintf(num_str, "%d", last_digit);
    write(1, num_str, sizeof(num_str) - 1);

    if (last_digit > 5)
        write(1, msg3, sizeof(msg3) - 1);
    else if (last_digit == 0)
        write(1, msg4, sizeof(msg4) - 1);
    else
        write(1, msg5, sizeof(msg5) - 1);

    return (0);
}
