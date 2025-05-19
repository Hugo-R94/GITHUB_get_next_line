#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10  // Change à 10000 si tu veux tester avec ce buffer
#endif

int main(void)
{
    int fd = open("read_error.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("open");
        return 1;
    }

    char *line = NULL;
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s", line);
        free(line);
    }

    close(fd);
    return 0;
}
