LIB_SRC = ft_converter.c \
	ft_printf.c \
	ft_putchar.c \
	ft_punt.c \
	ft_putnbr_base.c \
	ft_putnbr_sign.c \
	ft_strlen.c \
	ft_putptr.c \
	ft_putstr.c

G = \033[1;32m
R = \033[0;31m
NC = \033[0m

NAME = libftprintf.a
LIB_OBJ_DIR = objects
LIB_OBJ = $(patsubst %.c, $(LIB_OBJ_DIR)/%.o, $(LIB_SRC))
CC = cc  -Wall -Wextra -Werror -g

all: $(NAME)
	@echo "$(G)██████╗  ██████╗  ██████╗██╗ ██████╗ $(NC)"
	@echo "$(G)██╔══██╗██╔═══██╗██╔════╝██║██╔═══██╗$(NC)"
	@echo "$(G)██████╔╝██║   ██║██║     ██║██║   ██║$(NC)"
	@echo "$(G)██╔══██╗██║   ██║██║     ██║██║   ██║$(NC)"
	@echo "$(G)██║  ██║╚██████╔╝╚██████╗██║╚██████╔╝$(NC)"
	@echo "$(G)╚═╝  ╚═╝ ╚═════╝  ╚═════╝╚═╝ ╚═════╝ $(NC)"
	@echo "$(G)----------------------------------------------------------------------------------------------------$(NC)"
	@echo "$(G)------------------------------------------ Printf Is Ready ------------------------------------------$(NC)"
	@echo "$(G)----------------------------------------------------------------------------------------------------\n$(NC)"
$(NAME): $(LIB_OBJ) ft_printf.h
	@ar -rcs $(NAME) $(LIB_OBJ)
	@printf "%-106s\r" ""
	@echo "$(G)------------------------------------ libftprintf.a Finished Compiling ------------------------------------$(NC)\n"
$(LIB_OBJ_DIR):
	@mkdir -p $(LIB_OBJ_DIR)
$(LIB_OBJ_DIR)/%.o: %.c | $(LIB_OBJ_DIR)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<
	@printf "%-200s\r" ">Libft compiling: ""$(CC) $(CFLAGS) $(INCLUDE) -c -o $@ $<"
clean:
	@rm -rf $(LIB_OBJ_DIR)
	@echo "$(R)-------------------------------------- Printf Has Been Cleaned --------------------------------------$(NC)"
fclean: clean
	@rm -f $(NAME)
re: fclean all
.PHONY: all clean fclean re