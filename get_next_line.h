
#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

// À définir selon ton projet si non défini ailleurs
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 10
# endif

// Fonctions principales
char	*get_next_line(int fd);
char	*ft_read(int fd, char *static_str);
char	*ft_line(char *statict_str);

// Fonctions utilitaires
void	*ft_calloc(size_t nmemb, size_t size);
int		ft_strlen(const char *str);
char	*ft_strcat(char *dest, const char *src);
char	*ft_strjoin(const char *s1, const char *s2);

// Bonus : si tu utilises ft_strchr
char	*ft_strchr(const char *s, int c); // à implémenter si non faite
char	*ft_next(char *buffer);
char	*ft_free(char *buffer, char *buf);
char	*ft_clean(char *static_str);
char	*ft_strdup(const char *s);

#endif
