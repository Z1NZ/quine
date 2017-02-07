#	Library output

#	GCC flags

#	Sources

all:
	make -C ./Colleen/
	make -C ./Grace/
	make -C ./Sully/

# To remove generated files
clean:
	make clean -C ./Colleen/
	make clean -C ./Grace/
	make clean -C ./Sully/

fclean:
	@echo "RM\tprojet ($(NAME))"
	make fclean -C ./Colleen/
	make fclean -C ./Grace/
	make fclean -C ./Sully/

re: fclean all

git:
	@git add .
	@echo "Enter Your Commit :"
	@read var1 ; git commit -m "$$var1"
	@git push
