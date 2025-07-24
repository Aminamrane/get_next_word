#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

char find_space(char *s){

    int index = 0;

    while (s[index] && s[index] != ' ') {
            index++;
    } 

    return index;

}

char *extract_word(char *s) {
    
    char *word;
    int index;
    int i = 0;
    index = find_space(s);


    word = malloc(index + 1);

    if (!word) {
        return NULL;
    }
    

    while (i < index) {
        word[i] = s[i];
        i++; 
    }

    word[index] = '\0';

    return word;

}

int str_len(char *s){

    int i = 0;

    if(!s) {
        return 0;
    }

    while(s[i]) {
        i++;
    }

    return i;

}

char *left_over(char *s) {

    char *clean_rest;


}