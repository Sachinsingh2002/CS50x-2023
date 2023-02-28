#include <stdio.h>
#include <cs50.h> //include libraries

int main(void)
{
    int height, row, column, space;
    do
    {
        height = get_int("enter height here: "); //get user input
    }
    while (height < 1 || height > 8);

    for (row = 0; row < height; row++) //conditions for row
    {
        for (space = 0; space < height - row - 1; space++) //condition for spaces
        {
            printf(" ");
        }
        for (column = 0; column <= row;  column++) //conditions for columns
        {
            printf("#");
        }
        printf("\n");
    }

}