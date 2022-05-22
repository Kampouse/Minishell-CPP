NAME = minishell
FLAGS = -Wall -Wextra -Werror --std=c++98 
SRCS =  main.cpp

RM =  rm -rf 
.cpp.o:
	@c++ ${FLAGS}  -c $< -o ${<:.cpp=.o}

OBJS = ${SRCS:.cpp=.o}
CC = c++

all: ${NAME}
${NAME}:${OBJS} 
		@${CC} ${OBJS} ${FLAGS}  -lreadline -L./readline   -lncurses  -L./ncurses/lib -o ${NAME}
run: all
	./${NAME} 
val: all
	valgrind   --track-origins=yes -s --trace-children=yes ./$(NAME)
clean:
	    ${RM} ${OBJS}	
git:
		@git add ${SRCS} Makefile
fclean: clean
	@${RM} ${NAME}
re: fclean all
	
.PHONY: clean fclean re all run git

