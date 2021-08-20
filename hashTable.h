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
int hash_function(char *w)
{
    char c = toupper(w[0]);

    return c - 65;
}

void insertion(char *w)
{
    int index = hash_function(w);

    printf("%i\n", index);
}

