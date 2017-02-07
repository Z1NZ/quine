#	Library output
NAME = Colleen

#	GCC flags
CFLAGS = -Wall -Wextra -Werror

#	Sources
SOURCES = ./Colleen.c
OBJS = $(SOURCES:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	@echo ">>>>> Génération de Colleen"
	@gcc $(OBJS) -o $(NAME)
	@echo "Terminée"

# To obtain object files
%.o: %.c
	@$(CC) -c $(CFLAGS) $< -o $@

# To remove generated files
clean:
	@echo "RM\ttous les objects (.o)"
	@$(RM) $(OBJS)

fclean: clean
	@echo "RM\tprojet ($(NAME))"
	@$(RM) $(NAME)

re: fclean all

git:
	@git add .
	@echo "Enter Your Commit :"
	@read var1 ; git commit -m "$$var1"
	@git push
