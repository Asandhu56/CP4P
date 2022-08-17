// TOKENIZING V3

#define _CRT_SECURE_NO_WARNINGS

#include "tokenizing.h"

int main(void) //  global function
{
    void tokenizing(); //  desired function to be called
    {
        printf("*** Start of Tokenizing Words Demo ***\n"); //  starting of the code

        char words[200]; //  character type variable to store user input
        char *word;      //  character type variable to store user input
        int w_counter;   //  Integer value stored in a variable

        printf("Type a few words separated by space(q - to quit):\n"); // Taking input to exit the code
        gets(words);                                                   // gets function to scan and store string

        while (strcmp(words, "q") != 0) // while condition
        {
            word = strtok(words, " "); // It will break the string and will continue from the next line
            w_counter = 1;             // check if condition is true
            while (word)               // while condition
            {
                printf("Word #%d is \'%s\'\n", w_counter++, word); // printing the output after checking all the given conditions
                word = strtok(NULL, " ");                          // It will break the string and will continue from the next line
            }
            printf("Type a few words separated by space(q - to quit):\n"); // Taking input to exit the code
            gets(words);                                                   // gets function to scan and store string
        }
        printf("*** End of Tokenizing Words Demo ***\n\n"); // exiting the code by printing the given statement

        printf("*** Start of Tokenizing Phrases Demo ***\n"); //  starting of the code

        char phrases[200]; //  character  type variable to store user input
        char *phrase;      //  character type variable to store user input
        int p_counter;     //  Integer value stored in a variable

        printf("Type a few phrases separated by comma(q - to quit):\n"); // Taking input to exit the code
        gets(phrases);                                                    // gets function to scan and store string

        while (strcmp(phrases, "q") != 0) // if condition to check if the input is "q"
        {
            phrase = strtok(phrases, ","); // It will break the string and will continue from the next line
            p_counter = 1;                // check if condition is true

            while (phrase) // while condition
            {
                printf("Phrase #%d is \'%s\'\n", p_counter++, phrase); // printing the output after checking all the given conditions
                phrase = strtok(NULL, ",");                            // It will break the string and will continue from the next line
            }

            printf("Type a few phrases separated by comma(q - to quit):\n"); // Taking input to exit the code
            gets(phrases);                                                    // gets function to scan and store string
        }
        printf("*** End of Tokenizing Phrases Demo ***\n\n"); // exiting the code by printing the given statement

        printf("*** Start of Tokenizing Sentences Demo ***\n"); //  starting of the code

        char sentences[200]; //  character  type variable to store user input
        char *sentence;      //  character type variable to store user input
        int s_counter;       //  Integer value stored in a variable

        printf("Type a few sentences separated by dot(q - to quit):\n"); // Taking input to exit the code
        gets(sentences);                                                 // gets function to scan and store string

        while (strcmp(sentences, "q") != 0) // while condition to check if the input is "q"
        {
            sentence = strtok(sentences, "."); // It will break the string and will continue from the next line
            s_counter = 1;                     // check if condition is true
            while (sentence)                   // while condition
            {
                printf("sentence #%d is \'%s\'\n", s_counter++, sentence); // printing the output after checking all the given conditions
                sentence = strtok(NULL, ".");                              // It will break the string and will continue from the next line
            }
            printf("Type a few sentences separated by dot(q - to quit):\n");
            gets(sentences); // It will break the string and will continue from the next line
        }
        printf("*** End of Tokenizing Sentences Demo ***\n\n"); // exiting the code by printing the given statement
    }
    return 0; // return statement
}