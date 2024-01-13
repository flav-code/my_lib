##
## EPITECH PROJECT, 2024
## makefile
## File description:
## Build lib & copy libmy.a to the root
##

NAME	=	libmy.a

FOLDER_MY_PRINTF	=	./my_printf/my_printf.c \
						./my_printf/flags/c.c \
						./my_printf/flags/s.c \
						./my_printf/flags/d_i.c \
						./my_printf/flags/prc.c \
						./my_printf/flags/x.c \
						./my_printf/flags/x_cap.c \
						./my_printf/flags/o.c \
						./my_printf/flags/f.c \
						./my_printf/flags/e.c \
						./my_printf/flags/utils_g.c \
						./my_printf/flags/g.c \
						./my_printf/flags/p.c \
						./my_printf/flags/u.c \
						./my_printf/flags/n.c \
						./my_printf/flags/a.c \
						./my_printf/flags/a_cap.c \
						./my_printf/flags/e_cap.c \
						./my_printf/flags/g_cap.c

SRC	=	${FOLDER_MY_PRINTF} \
		my_compute_power_rec.c \
		my_compute_square_root.c \
		my_find_prime_sup.c \
		my_getnbr.c \
		my_isneg.c \
		my_is_prime.c \
		my_print_alpha.c \
		my_print_digits.c \
		my_print_revalpha.c \
		my_putchar.c \
		my_put_nbr.c \
		my_get_nbr_length.c \
		my_putstr.c \
		my_revstr.c \
		my_showmem.c \
		my_showstr.c \
		my_show_word_array.c \
		my_sort_int_array.c \
		my_strcapitalize.c \
		my_strcat.c	\
		my_strcmp.c \
		my_strcpy.c \
		my_strdup.c \
		my_str_isalpha.c \
		my_str_islower.c \
		my_str_isnum.c \
		my_str_isprintable.c \
		my_str_isupper.c \
		my_strconcat.c \
		my_nbrstr.c \
		my_strlen.c \
		my_strlowcase.c \
		my_strncat.c \
		my_strncmp.c \
		my_strncpy.c \
		my_strstr.c \
		my_strtok.c \
		my_str_to_word_array.c \
		my_strupcase.c \
		my_swap.c \
		display_zero.c \
		len_nbr.c \
		min.c \
		utils.c

OBJ	=	$(SRC:.c=.o)

INCLUDE_PATH	=	../../include/

all:	$(NAME)

$(NAME):	$(OBJ)
	@ar rc $(NAME) $(OBJ)
	@cp $(NAME) ../
	@mkdir -p ${INCLUDE_PATH}
	@cp my.h ${INCLUDE_PATH}

clean:
	@rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)
	rm -f ../$(NAME)

re:	fclean all

.PHONY: all clean fclean re
