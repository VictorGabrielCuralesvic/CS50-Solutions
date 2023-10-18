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

        for (int block = 0; block <= line; block++)
        {
            printf("#");
        }

        printf("\n");
    }
}