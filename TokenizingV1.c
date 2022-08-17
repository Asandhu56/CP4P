#define _CRT_SECURE_NO_WARNINGS //  Removes secure warnings
#include "tokenizing.h" //  includes header file to the .c file

// TOKENIZING V1

int main(void) //  global function
{
    void tokenizing(); //  desired function to be called
    {
        printf("*** Start of Tokenizing Words Demo ***\n");            //  starting of the code
        char words[200];                                               //  character type variable to store user input
        char *word;                                                    //  character type variable to store user input
        int w_counter;                                                 //  Integer value stored in a variable
        printf("Type a few words separated by space(q - to quit):\n"); // Taking input to exit the code
        gets(words);                                                   // gets function to scan and store string
        while (strcmp(words, "q") != 0)                                // if condition to check if the input is "q"
        {
            word = strtok(words, " "); // It will break the string and will continue from the next line
            w_counter = 1;             // check if condition is true
            while (word)               // while condition
            {
                printf("Word #%d is \'%s\'\n", w_counter++, word); // printing the output after checking all the given conditions
                word = strtok(NULL, " ");                          // It will break the string and will continue from the next line
            }
            printf("Type a few words separated by space(q - to quit):\n"); // printing the output after checking all the given conditions
            gets(words);                                                   // gets function to scan and store string
        }
        printf("*** End of Tokenizing Words Demo ***\n\n"); // exiting the code by printing the given statement
    }
    return 0;
}