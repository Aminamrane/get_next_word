#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(void) {

    char *s = "precious et youcef";
    int i = 0;
    i = find_space(s);

    printf("resultat : %d", i);

    return 0;

}