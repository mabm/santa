SRC	=	Toy.cpp	\
		Box.cpp		\
		GiftPaper.cpp	\
		LittlePony.cpp	\
		Teddy.cpp	\
		Wrap.cpp	\
		main.cpp	\
		ConvoyorBeltPePeNoel.cpp \
		Object.cpp \

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
