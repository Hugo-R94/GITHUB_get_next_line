#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "get_next_line.h"

#ifndef BUFFER_SIZE
#define BUFFER_SIZE 10
#endif

int main()
{ 
	char *line;
	char *line2;
	char *line3;
	int fd = open("empty.txt",O_RDONLY);
	int fd2 = open(NULL, O_RDONLY);
	int fd3 = open("txt.txt", O_RDONLY);
	line = get_next_line(fd);
	printf("%s\n",line);
	line2 = get_next_line(fd2);
	printf("%s\n",line2);
	line3 = get_next_line(fd3);
	printf("%s\n",line3);
	free(line);
	free(line2);
	free(line3);
	close(fd);
	close(fd3);
}