#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include <fcntl.h> 

char *get_next_word(char **leftover)
{
    if (!*leftover || str_len(*leftover) == 0)
        return NULL;

    char *word = extract_word(*leftover);
    char *rest = left_over(*leftover);

    free(*leftover);
    *leftover = rest;

    return word;
}
