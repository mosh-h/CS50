#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // get users input
    int x = get_int("x: ");

    int y = get_int("y: ");

    // if x is greater than y add 1 to x and show the result
    // if x is less than y and x + y together
    // if x is equal to y, print x and y are equal
    if (x > y)
    {
       x = x + 1;
       printf("answer is %i\n", x);
    }
    else if (x < y)
    {
        x = x + y;
        printf("answer is %i\n", x);
    }
    else if (x == y)
    {
        printf("both numbers are equal\n");
    }
}
