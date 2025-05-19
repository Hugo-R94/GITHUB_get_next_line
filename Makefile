# **************************************************************************** #
#                                  VARIABLES                                  #
# **************************************************************************** #

NAME		= get_next_line.a

SRC_DIR		= .
OBJ_DIR		= .
INC_DIR		= .

SRC_FILES	= $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES	= $(SRC_FILES:$(SRC_DIR)/%.c=$(OBJ_DIR)/%.o)

CC			= cc
CFLAGS		= -Wall -Wextra -Werror -D BUFFER_SIZE=42 -I $(INC_DIR)
AR			= ar rcs
RM			= rm -f
MKDIR		= mkdir -p

# **************************************************************************** #
#                                  RULES                                      #
# **************************************************************************** #

all: $(NAME)

$(NAME): $(OBJ_FILES)
	$(AR) $(NAME) $(OBJ_FILES)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c | $(OBJ_DIR)
	$(CC) $(CFLAGS) -c $< -o $@

$(OBJ_DIR):
	$(MKDIR) $(OBJ_DIR)

clean:
	$(RM) $(OBJ_FILES)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
