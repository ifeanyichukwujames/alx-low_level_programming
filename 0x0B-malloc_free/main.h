#ifndef _MAIN_
#define _MAIN_

char **strtow(char *str);

char *argstostr(int ac, char **av);

void free_grid(int **grid, int height);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

char *_strdup(char *str);

char *create_array(unsigned int size, char c);

int is_palindrome(char *s);

int is_prime_number(int n);

int _sqrt_recursion(int n);

char *_strdup(char *str);

char *str_concat(char *s1, char *s2);

int **alloc_grid(int width, int height);

void free_grid(int **grid, int height);

char *argstostr(int ac, char **av);

char **strtow(char *str);

#endif
