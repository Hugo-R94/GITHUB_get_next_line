#include <fcntl.h>     // open
#include <stdlib.h>    // exit
#include <unistd.h>    // write, close
#include <stdio.h>     // printf
#include "get_next_line.h"

// int	main(int argc, char **argv)
// {
// 	int		fd;
// 	char	*line;

// 	if (argc != 2)
// 	{
// 		printf("Usage: %s <file_path>\n", argv[0]);
// 		return (1);
// 	}

// 	fd = open(argv[1], O_RDONLY);
// 	if (fd < 0)
// 	{
// 		perror("Error opening file");
// 		return (1);
// 	}
// 	line = get_next_line(fd);
// 	while ((line != NULL))
// 	{
// 		printf("%s", line);
// 		free(line);
// 		line = get_next_line(fd);
// 	}
// }
#include <fcntl.h>
#include <stdio.h>
#include <stdlib.h>

char *get_next_line(int fd); // Déclare ta fonction get_next_line

int main(void)
{
    int fd = open("read_error.txt", O_RDONLY);
    if (fd == -1)
    {
        perror("open");
        return 1;
    }

    char *line;
    int i = 1;

    while ((line = get_next_line(fd)) != NULL)
    {
        printf("Ligne %d: %s", i++, line);
        free(line);
    }

    close(fd);
    return 0;
}

// 	close(fd);
// 	return (0);
// }

// int main(void)
// {
// 	char *strlong= "mange moi dont le \npoireau";
// 	char *str = ft_clean(strlong);
// 	printf("%s\n",str);
// }

// int main()
// {
// 	char *filename = "file";
// 	int fd = open(filename,O_RDONLY);
// 	char *line = get_next_line(fd);
// 	int count = 1;
// 	printf("line %d = %s\n",count, line);
// 	count++;
// 	line = get_next_line(fd);
// 	printf("line %d = %s\n",count, line);
// 	count++;
// 	line = get_next_line(fd);
// 	printf("line %d = %s\n",count, line);
// 	count++;
// 	line = get_next_line(fd);
// 	printf("line %d = %s\n",count, line);
// }