NAME = my_prog
CFLAGS = -Wall -Wextra -Werror
HEADER = include
SRCFILES = main.c my_strchr.c my_strlen.c
SRCFLDR = src


all: $(NAME)
	@echo "This is large Make"

$(NAME):
	gcc $(addprefix $(SRCFLDR)/,$(SRCFILES)) -I $(HEADER) -o $(NAME)

clean:
	@rm $(NAME)

re: clean all
