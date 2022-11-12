#include <unistd.h>
#include <dirent.h>
#include <limits.h>
#include <string.h>

extern char **environ;

char *show_input(void);
void prompt(void);
char *_strcat(char *src);
int _strlen(char *str);
void place(char *str);
char *findfile(char *command);
char *find_command(char *command);
int compare(char *s1, char *s2);
int _strcmpdir(char *s1, char *s2);









#endif
