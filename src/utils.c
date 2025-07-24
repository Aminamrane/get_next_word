#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int find_space(char *s){

    int index = 0;

    while (s[index] && s[index] != ' ') {
            index++;
    } 

    return index;

}

char *str_join(char *s1, char *s2) {

    char *line;
    int len_total = 0;
    int i = 0;
    int j = 0;

    
    if (!s1) {
        s1 = "";
    }

      if (!s2) {
        s2 = "";
    }

    len_total = str_len(s1) + str_len(s2);
    line = malloc(len_total + 1);

    while (s1[i] != '\0') {
        line[i] = s1[i];
        i++;
    }

    while (s2[j] != '\0') {
        line[i+j] = s2[j];
        j++;
    }

    line[i+j] = '\0';

    return line;

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

char *left_over(char *s)
{
    int index = find_space(s);

    int len = str_len(s);
    int rest_len = len - index - 1;

    char *clean_rest = malloc(rest_len + 1);
    if (!clean_rest)
        return NULL;

    int i = 0;
    while (s[index + 1 + i])
    {
        clean_rest[i] = s[index + 1 + i];
        i++;
    }

    clean_rest[i] = '\0';
    return clean_rest;
}