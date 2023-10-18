#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int height;

    do
    {
        height = get_int("Height: ");
    }
    while (height < 1 || height > 8);

    for (int line = 0; line < height; line++)
    {
        for (int space = height - 1; space > line; space--)
        {
            printf(" ");
        }

        for (int left_blocks = 0; left_blocks <= line; left_blocks++)
        {
            printf("#");
        }

        printf("  ");

        for (int right_blocks = 0; right_blocks <= line; right_blocks++)
        {
            printf("#");
        }

        printf("\n");
    }
}