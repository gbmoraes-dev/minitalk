NAMEC = client
NAMES = server

PRINTF = libftprintf.a
LIBFT = libft.a

SRCC_FILES =	client.c
SRCS_FILES =	server.c

SRC_DIR = src/
SRCC = $(addprefix $(SRC_DIR), $(SRCC_FILES))
SRCS = $(addprefix $(SRC_DIR), $(SRCS_FILES))

OBJC = ${SRCC:.c=.o}
OBJS = ${SRCS:.c=.o}

CC			= cc
CFLAGS		= -Wall -Werror -Wextra
INCLUDE = -I include
RM = rm -rf

MSG1 = @echo "42@compile ✔️\nCompiled and now is working! 🚂💨"
MSG2 = @echo "42@cleaned ✔️\nWe cleaned the floor and now there's no .o files! 🧹"

all:	$(NAMEC) $(NAMES)

$(NAMEC) : $(OBJC)
		@make -C libs/printf
		@make -C libs/libft
		@$(CC) $(CFLAGS) $(OBJC) $(INCLUDE) libs/printf/$(PRINTF) libs/libft/$(LIBFT) -o $(NAMEC)
		$(MSG1)
	
$(NAMES) : $(OBJS)
		@make -C libs/printf
		@make -C libs/libft
		@$(CC) $(CFLAGS) $(OBJS) $(INCLUDE) libs/printf/$(PRINTF) libs/libft/$(LIBFT) -o $(NAMES)
		$(MSG1)

clean : 
		@make clean -C libs/printf
		@make clean -C libs/libft
		@$(RM) $(OBJC)
		@$(RM) $(OBJS)
		@$(RM) $(OBJBC)
		@$(RM) $(OBJBS)

fclean : clean
		@make fclean -C libs/printf
		@make fclean -C libs/libft
		@$(RM) $(NAMEC)
		@$(RM) $(NAMES)
		@$(RM) $(PRINTF)
		@$(RM) $(LIBFT)
		$(MSG2)

re: fclean all

.PHONY:		all bonus clean fclean re
