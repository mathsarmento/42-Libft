NAME = libft.a
FLAGS = -Wall -Wextra -Werror
REMOVE = rm -rf

LIB_PATH = ./

SRCS = ft_split.c ft_itoa.c ft_strchr.c ft_strdup.c \
		ft_strjoin.c ft_strmapi.c ft_strnstr.c ft_strrchr.c \
		ft_strtrim.c ft_substr.c ft_atoi.c ft_isalnum.c \
		ft_isalpha.c ft_isascii.c ft_isdigit.c ft_isprint.c \
		ft_memcmp.c ft_strncmp.c ft_tolower.c ft_toupper.c \
		ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_calloc.c \
		ft_memchr.c ft_memcpy.c ft_memmove.c ft_memset.c \
		ft_bzero.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		ft_putstr_fd.c ft_striteri.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c \
		ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJS = $(SRCS:.c=.o)
B_OBJS = $(BONUS:.c=.o)

all: $(NAME)

$(NAME): $(OBJECTS)
    ar -rcs $(NAME) $(OBJECTS)

bonus: $(B_OBJS)

clean:
	$(REMOVE) $(OBJS) $(B_OBJS)

fclean: clean
		$(REMOVE) $(NAME)

re: fclean all

.PHONY: re fclean clean all bonus $(NAME)