#ifndef MAIN_H
#define MAIN_H

char *str_concat(char *s1, char *s2);
char *create_array(unsigned int size, char c);
char *_strdup(char *str);
int _putchar(char c);
int **alloc_grid(int width, int height);
void print_grid(int **grid, int width, int height);

#endif /* MAIN_H */
