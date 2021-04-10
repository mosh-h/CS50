//learning how to create a for loop

#include <stdio.h>
#include <cs50.h>
#include <unistd.h>

int main(void)
{
    int x = get_int("Enter a number: ");
    int i;
    printf("I will increase this number by 10\n\n");
        for(i = 0; i < 10; ++i)
        {
            int f = i + (x + 1);
            printf("%i\n", f);
            sleep(2);
        }
        printf("\nDone!!\n\n");
}
