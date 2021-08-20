#include "hashTable.h"



int main(void)
{


    tonull();

    int keep = 1;



    // Get words
    while(keep)
    {
        insertion(get_string("What is the word: \n"));

        keep = get_int("1. Add another word: \n0. Exit: \n");
    }

    // Print out words
    for(int i = 0; i < 3; i++)
    {
        for(node *ptr = DICTIONARY[i]; ptr != NULL; ptr = ptr -> next)
        {
            printf("%s;  ", ptr -> word);
        }

        printf("\n");
    }

    return 0;
}