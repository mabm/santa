##
## Makefile for  in /home/ades_n/PiscineCPP/santa
##
## Made by ades nicolas
## Login   <ades_n@epitech.net>
##
## Started on  Sat Jan 17 12:36:20 2015 ades nicolas
## Last update Sat Jan 17 12:36:21 2015 ades nicolas
##


SRC	=	AToy.cpp	\
		Box.cpp		\
		GiftPaper.cpp	\
		LittlePony.cpp	\
		Teddy.cpp	\
		Wrap.cpp	\
		TablePePeNoel.cpp	\
		main.cpp	\

OBJ	=	$(SRC:.cpp=.o)

NAME	=	Santa

CXFLAGS +=	-g -Wall -Wextra -Werror

CXX	=	clang++

RM	=	rm -rf

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CXX) $(OBJ) -o $(NAME)

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
