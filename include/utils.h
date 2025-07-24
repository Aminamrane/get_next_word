#ifndef UTILS_H
#define UTILS_H

#include <stddef.h>

int find_space(char *s);
char *extract_word(char *s);
int str_len(char *s);
char *left_over(char *s);
char *get_next_word(char **leftover);
char *str_join(char *s1, char *s2);
#endif /* UTILS_H */