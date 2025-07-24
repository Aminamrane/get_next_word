#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

char find_space(char *s){

    int index = 0;

    while (s[index] != ' ') {
            index++;
    } 

    return index;

}