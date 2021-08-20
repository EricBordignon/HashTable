#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>
#include <ctype.h>

// Constant directives
#define LENGTH 45

#define SIZE 26

// Struct
typedef struct node
{
    char word[LENGTH + 1];
    struct node *next;
}
node;

// Global hash table
node *DICTIONARY[SIZE];

// Functions
void tonull()
{
    for(int i = 0; i < SIZE; i++)
    {
        DICTIONARY[i] = malloc(sizeof(node));
    }
}

void insertion(char *w)
{
    char c = toupper(w[0]);

    int index = c - 65;

    node *new_node = malloc(sizeof(node));

    new_node = DICTIONARY[index];

    DICTIONARY[index] -> next = new_node;

    strcpy(DICTIONARY[index] -> word, w);
}

