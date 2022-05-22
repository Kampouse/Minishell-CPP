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


void skip_space(std::string::iterator&elem,std::string*str)
{
		while( elem != str->end() && std::isspace(*elem))
				elem++;

}


void find_end(std::string::iterator&elem,std::string*str)
{
		while( elem != str->end() && !std::isspace(*elem))
				elem++;
}

int main(void)
{
		while(1)
	{
		std::string *value = ReadLine(">");
		std::string::iterator begin =  value->begin();
		std::string::iterator end =  value->begin();
		skip_space(end,value);
		begin = end;
		find_end(end,value);
		std::cout <<"("	<< std::string(begin,end) << ")" << std::endl;
		if(*value  ==  "exit")		
		{
			delete  value;
			break;
		} 
		
		delete  value;
	}
}
