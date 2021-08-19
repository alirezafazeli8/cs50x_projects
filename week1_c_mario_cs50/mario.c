#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // user input variable
    int userInput;
    // user inpur condition
    do
    {
        userInput = get_int("pleas enter number between 1 and 8 : ");
    }
    while (userInput > 8 || userInput < 1);


    // make time
    for (int i = 0; i < userInput; i++)
    {
        // make space
        for (int x = userInput - 1; x > i; x--)
        {
            printf(" ");

        }

        // make block
        for (int x = -1; x < i; x++)
        {
            printf("#");
        }

        // make new line
        printf("\n");
    }
}
