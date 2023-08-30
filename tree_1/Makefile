NAME = tree
SRCS = tree.c tree_test.c
OBJS = $(SRCS:.o=.c)

all : $(NAME)

$(NAME) : $(OBJS)
	gcc $(OBJS) -o $(NAME)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY : all clean fclean re