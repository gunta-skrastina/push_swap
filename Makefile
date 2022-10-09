# _*_ MakeFile _*_

CC = gcc

CFLAGS = -Wextra -Wall -Werror

PRINTF = libftprintf.a
NAME = push_swap

SRCS = main.c ft_atoi_new.c ft_check.c ft_swap.c ft_swap_two.c ft_swap_three.c ft_sa.c ft_sb.c \
		ft_pa.c ft_pb.c ft_ra.c ft_rb.c ft_rr.c ft_rra.c ft_rrb.c ft_rrr.c ft_ss.c ft_calculate_pos.c \
		ft_assign_index.c utils.c utils2.c ft_big_sort.c ft_move.c

OBJS = $(SRCS:.c=.o)

all: $(PRINTF) $(NAME)

$(PRINTF):
	$(MAKE) -C ft_printf
	cp ft_printf/$(PRINTF) $(PRINTF)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) $(PRINTF) -o $(NAME)

clean:
	rm -f $(OBJS)
	make clean -C ft_printf

fclean: clean
	rm -f $(NAME) $(PRINTF)
	make fclean -C ft_printf

re: fclean all

.PHONY: all clean fclean re