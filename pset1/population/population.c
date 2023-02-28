#include <cs50.h>
#include <stdio.h>

int main(void)
{

    // TODO: Prompt for start size

    int start;
    do
    {
        start = get_int("starting population: ");
    }
    while (start < 9);

    // TODO: Prompt for end size

    int end;
    do
    {
        end = get_int("ending population: ");
    }
    while (start > end);

    // TODO: Calculate numbers of years until we reach threshold

    int Year = 0;
    do
    {
        start = start + (start / 3) - (start / 4);
        Year++;
    }
    while (start < end);

    // TODO: Print number of years

    printf("Years: %i", Year);

}

