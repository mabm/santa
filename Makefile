SRC	=	AToy.cpp	\
		Box.cpp		\
		GiftPaper.cpp	\
		LittlePony.cpp	\
		Teddy.cpp	\
		Wrap.cpp	\
		main.cpp	\

OBJ	=	$(SRC:.cpp=.o)

NAME	=	Santa

CXFLAGS +=	-Wall -Wextra -Werror

CXX	=	clang++

RM	=	rm -rf

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CXX) $(OBJ) -o $(NAME)

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean re

.PHONY	:	all clean fclean re
