#include "hashTable.h"



int main(void)
{
    // Set all next to NULL
    /*for(int i = 0; i < SIZE; i++)
    {
        DICTIONARY[i] -> next = NULL;
        strcpy(DICTIONARY[i] -> word, "unknown");
    }*/

    int keep = 1;

    // Get words
    while(keep)
    {
        insertion(get_string("What is the word: \n"));

        keep = get_int("1. Add another number: \n0. Exit: \n");
    }

    return 10;

    // Print out words
    for(int i = 0; i < SIZE; i++)
    {
        for(node *ptr = DICTIONARY[i]; ptr != NULL; ptr = ptr -> next)
        {
            printf("%s;  ", ptr -> word);
        }

        printf("\n");
    }

    return 0;
}