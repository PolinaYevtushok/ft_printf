CC = cc
FLAGS = -Wall -Wextra -Werror
NAME = libftprintf.a
SRC_LIST =	ft_printf.c 		\
			ft_print_arg.c 		\
			ft_print_char.c 	\
			ft_print_str.c 		\
			ft_print_hex.c 		\
			ft_print_int.c 		\
			ft_print_uint.c 	\
			ft_print_ptr.c 		\
			ft_print_percent.c 
INC = libft
OBJ_DIR = obj/
SRC_DIR = src/
SRC = $(addprefix $(SRC_DIR), $(SRC_LIST:.c=.o))
OBJ = $(addprefix $(OBJ_DIR), $(SRC_LIST:.c=.o))

all: $(NAME)

$(NAME): $(OBJ)
	@$(MAKE) all -C libft
	@cp libft/libft.a libftprintf.a
	@ar rcs $@ $^

$(OBJ_DIR)%.o: $(SRC_DIR)%.c 
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(FLAGS) -I $(INC) -c -o $@ $<

clean:
	@$(MAKE) clean -C libft
	@rm -rf $(OBJ_DIR)

fclean: clean
	@$(MAKE) fclean -C libft
	@rm -f $(NAME)

re: fclean all
