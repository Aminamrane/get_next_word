#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include "utils.h"
#include <fcntl.h> 


int main(int argc, char **argv)
{
    if (argc != 2)
    {
        write(2, "User: ./gnw <file>\n", 18);
        return 1;
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1)
    {
        perror("Error");
        return 1;
    }

    char buffer[BUFFER_SIZE + 1];
    int bytes_read;
    char *leftover = NULL;
    char *tmp;

    while ((bytes_read = read(fd, buffer, BUFFER_SIZE)) > 0)
    {
        buffer[bytes_read] = '\0';
        tmp = leftover;
        leftover = str_join(leftover, buffer);
        free(tmp);
    }

    close(fd);

    if (!leftover)
        return 1;

    char *word;
    while ((word = get_next_word(&leftover)) != NULL)
    {
        printf("%s\n", word);
        free(word);
    }

    free(leftover);
    return 0;
}