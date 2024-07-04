##
## EPITECH PROJECT, 2023
## makefile
## File description:
## capslock noice
##

SRC	= 	lib/hashtable/new_hashtable.c \
		lib/hashtable/delete_hashtable.c \
		lib/hashtable/hash.c \
		lib/hashtable/insert.c \
		lib/hashtable/search.c \
		lib/hashtable/dump.c \
		lib/hashtable/delete.c \
		lib/functions/my_strlen.c \
		lib/functions/my_putstr.c \
		lib/functions/my_put_nbr.c \
		lib/functions/my_putchar.c \

OBJ	=	$(SRC:.c=.o)
BIN 	= 	secured
NAME	=	libhashtable.a

CPPFLAGS = 	-I include

LDLIBS	=	-L. -lhashtable

TESTS	=	-lcriterion --coverage
TEST_NAME = 	unit_tests
TESTS_FILES = 	tests/test_hash.c \
		tests/test_create_ht.c \
		tests/test_dump.c \
		tests/test_insert.c \
		tests/test_delete.c \
		tests/test_delete_ht.c \
		tests/test_search.c \
		tests/test_myputnbr.c \

PATHLIB	=	lib/functions/
PATHHASH=	lib/hashtable/

all:	$(NAME)

$(NAME):	$(OBJ)
		ar rc $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)
	rm -f *.gcno *.gcda
	rm -f $(PATHLIB)*.gcno $(PATHLIB)*.gcda

fclean:	clean
	rm -f $(NAME)
	rm -f $(BIN)
	rm -f $(TEST_NAME)
	rm -f $(PATHHASH)*.gcno $(PATHHASH)*.gcda

debug:	CPPFLAGS += -g3
debug:	re
	$(CC) main.c -o $(BIN) -L. -lhashtable

tests_run: CPPFLAGS += --coverage
tests_run: re
	$(CC) -o $(TEST_NAME) $(TESTS_FILES) $(LDLIBS) $(TESTS)
	./$(TEST_NAME)

re:	fclean all
