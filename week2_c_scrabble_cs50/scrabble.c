#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};
// words ascii code
int words[26] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

// function prototype
int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner
    if (score1 > score2)
    {
        printf("Player 1 wins! \n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins! \n");
    }
    else
    {
        printf("Tie ! \n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    // word counter variable
    int wordCount = 0;
    // for, for iterate to word
    for (int i = 0; i < strlen(word); i++)
    {
        // convert char to lowercase and ascii code
        int wordToInt = tolower(word[i]);
        // iterate to words array
        for (int g = 0; g < 26; g++)
        {
            // check words array equal to char ascii code
            if (words[g] == wordToInt)
            {
                // add points to wordcount
                wordCount += POINTS[g];
            }
        }
    }
    // return wordCount
    return wordCount;
}
