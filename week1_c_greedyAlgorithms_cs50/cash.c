#include <stdio.h>

// cs50 library
#include <cs50.h>

// math library
#include <math.h>

int main(void)
{
    // userInput variable
    float userInput;
    do
    {
        userInput = get_float("pleas enter your money : ");
    }
    while (userInput < -0); // condition for enter correct number

    // convert to cent
    int moneyCent = round(userInput * 100);
    int moneyCounter = 0;

    // coins varibale
    int coin25 = 25;
    int coin10 = 10;
    int coin5 = 5;
    int coin1 = 1;

    // check 25coin
    while (moneyCent >= coin25)
    {
        moneyCent -= coin25;
        moneyCounter++;
    }

    // check 25coin
    while (moneyCent >= coin10)
    {
        moneyCent -= coin10;
        moneyCounter++;
    }

    // check 25coin
    while (moneyCent >= coin5)
    {
        moneyCent -= coin5;
        moneyCounter++;
    }

    // check 25coin
    while (moneyCent >= coin1)
    {
        moneyCent -= coin1;
        moneyCounter++;
    }

    // print the coins
    printf("%i\n", moneyCounter);
}
