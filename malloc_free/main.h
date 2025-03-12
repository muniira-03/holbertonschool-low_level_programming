#ifndef MAIN_H
#define MAIN_H

char *str_concat(char *s1, char *s2);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _putchar(char c);
int **alloc_grid(int width, int height);
void print_grid(int **grid, int width, int height);
int **alloc_grid(int width, int height);
void free_grid(int **grid, int height);
void print_grid(int **grid, int width, int height);
char *argstostr(int ac, char **av);
int count_words(char *str);
char **allocate_words(char *str, int word_count);
char **strtow(char *str);
int word_count(char *str);
char *allocate_word(char *str, int start, int end);
char **strtow(char *str);

#endif /* MAIN_H */
