#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // input number
    int height = get_int("Number: ");
    while (height > 8 || height < 1)
    {
        height = get_int("Number: ");
    }
    // main loop
    for (int i = 1; i <= height; i++) // (start, stop, action)
    {
         // loop for spaces from left pyramid
        for (int j = height-1; j >= i; j--)
        {
            printf(" ");
        }
        // loop for # from left pyramid
        for (int k = 1; k <= i; k++)
        {
            printf("#");
        }
        // gap between left and right pyramids
        printf("  ");

        // # for right pyramid
        for (int l = 1; l <= i; l++)
        {
            printf("#");
        }
        printf("\n");
    }
}