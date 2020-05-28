NAME = my_masterpiece
CFLAGS =  -Wall -Wextra -Werror

all: $(NAME)
	@echo "This is small make"

$(NAME):
	gcc $(CFLAGS) main.c -o $(NAME)

clean:
	@rm -rf $(NAME)

re: clean all
