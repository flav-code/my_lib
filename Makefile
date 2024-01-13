##
## EPITECH PROJECT, 2024
## makefile
## File description:
## Makefile of the project
##

BINARY_NAME	=	a.out

NAME_TEST	=	unit_tests

CFLAGS	=	-Wall -Wextra -Wno-unused-variable -I./include

LDFLAGS	=	-L./lib

LDLIBS	=	-lmy

LIB_PATH	=	./lib/my

SRC_MAIN	=	./src/main.c \

SRC	=	\

SRC_TESTS	=	\

CRITERION_FLAGS	=	$(CFLAGS) ${LDFLAGS} ${LDLIBS} --coverage -lcriterion

OBJ	=	$(SRC_MAIN:.c=.o) $(SRC:.c=.o)

all:	$(BINARY_NAME)

build_lib:
	make -C ${LIB_PATH}

clean_lib:
	make fclean -C ${LIB_PATH}

$(BINARY_NAME):	build_lib $(OBJ)
	$(CC) -o $(BINARY_NAME) ${OBJ} ${LDFLAGS} ${LDLIBS}

clean:
	${RM} $(OBJ)

fclean:	clean
	${RM} $(BINARY_NAME)

c_all: clean_lib fclean

re:	fclean all

debug:	CFLAGS += -g3
debug:	re

tests_run:	build_lib
	${CC} ${SRC} $(SRC_TESTS) -o ${NAME_TEST} ${CRITERION_FLAGS}
	./${NAME_TEST}

gcovr:
	gcovr --exclude tests/
	gcovr --exclude tests/ --branches

.PHONY:	all build_lib clean_lib clean fclean c_all re debug tests_run gcovr
