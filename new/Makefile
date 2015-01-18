SRC	=	Toy.cpp	\
		ElfOfPePeNoel.cpp \
		Box.cpp		\
		GiftPaper.cpp	\
		LittlePony.cpp	\
		Teddy.cpp	\
		Wrap.cpp	\
		main.cpp	\
		ConveyorBeltPePeNoel.cpp \
		ConveyorBeltRand.cpp \
		Object.cpp \
		TablePePeNoel.cpp \
		TableRand.cpp	\
		ParserXML.cpp

OBJ	=	$(SRC:.cpp=.o)

NAME	=	Santa

XFLAGS +=	-g3 -Wall -Wextra -Werror

CXX	=	clang++ -g3

RM	=	rm -rf

all	:	$(NAME)

$(NAME)	:	$(OBJ)
		$(CXX) $(OBJ) -o $(NAME) $(XFLAGS)

clean	:
		$(RM) $(OBJ)

fclean	:	clean
		$(RM) $(NAME)

re	:	fclean all

.PHONY	:	all clean fclean re
