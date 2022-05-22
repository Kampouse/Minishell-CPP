#include	"iostream"
#include	"cstdlib"
#include	"readline/readline.h"

std::string *ReadLine(const char *display)
{
	char *str	 = readline(display);
	std::string Str(str);
	free(str);
return(new std::string(Str));
}

int main(void)
{
		while(1)
	{
		std::string *value = ReadLine(">");
		std::cout << *value << std::endl;
		if(*value  ==  "exit")		
		{
			delete  value;
			break;
		}
	
		delete  value;
	}
}
