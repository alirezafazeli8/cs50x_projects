#include <stdio.h>
// cs50 library
#include <cs50.h>

int main(void)
{
    // input variables
    int startSize;
    int endSize;
    // get start size
    do
    {
        startSize = get_int("pleas enter start size : ");
    }
    while (startSize < 9);

    // get end size
    do
    {
        endSize = get_int("pleas enter end size : ");
    }
    while (endSize < startSize);

    // counter variable
    int counter = 0;
    // compute count
    while (startSize < endSize)
    {
        //computing
        int perYear = ((startSize / 3) - (startSize / 4));
        startSize += perYear;
        counter++;
    }

    printf("Years: %i", counter);
}