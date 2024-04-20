NAME = libftprintf.a

SOURCES = ft_putchar.c ft_putstr.c ft_checkformat.c
SOURCES += ft_putnbr.c ft_putnbr_uns.c ft_puthx.c
SOURCES += ft_putptr.c ft_printf.c

OBJECTS = $(SOURCES:.c=.o)

CC		= cc

RM		= rm -f

CFLAGS = -Wall -Wextra -Werror

MSG1 = @echo "42@compile ✔️\nCompiled and now is working! 🚂💨"
MSG2 = @echo "42@cleaned ✔️\nWe cleaned the floor and now there's no .o files! 🧹"

$(NAME): $(OBJECTS)
		@ar rcs $(NAME) $(OBJECTS)
		$(MSG1)

%.o: %.c
		@$(CC) $(CFLAGS) -c $< -o $@

all:	$(NAME)

clean:
		@$(RM) $(OBJECTS)

fclean:	clean
		@$(RM) $(NAME)
		$(MSG2)

re:		fclean all

.PHONY : all clean fclean re
