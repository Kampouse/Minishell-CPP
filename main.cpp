#include	"iostream"
#include	"cstdlib"
#include	"readline/readline.h"
int main(void)
{

char *str;
str  = readline("noah");
free(str);
}
