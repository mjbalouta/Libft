
#defining that when the variable CC is used, the compiler will be cc
CC = cc

#declaring that the variable CFLAGS will use the flags below everytime it's called in the program
CFLAGS = -Wall -Wextra -Werror -g

#listing the objects used by the program
OBJS = main.o ft_isalpha.o ft_isdigit.o ft_isalnum.o ft_isascii.o ft_isprint.o ft_strlen.o ft_memset.o  ft_bzero.o ft_memcpy.o ft_memmove.o ft_strlcpy.o ft_strlcat.o ft_toupper.o ft_tolower.o ft_strchr.o ft_strrchr.o ft_strncmp.o ft_memchr.o ft_memcmp.o ft_strnstr.o ft_atoi.o ft_strdup.o

#name of the executable
NAME = libft.a

#creates an executable program
program: main.o $(NAME)
	@$(CC) $(CFLAGS) -o program main.o $(NAME) #links main.o and libft.a and creates an executable file with the name program

#rule to create the static library libft.a from object files .o
$(NAME): $(OBJS)
	@@echo "Compiling all files..."
	@ar rcs $(NAME) $(OBJS) #ar creates a static library. r adds the files, c creactes the archive and s creates an index for the library to speed up linking.

#defining the rule to compile .c files into object .o files
%.o: %.c libft.h #any .o file will be created with the correspondent .c file
	@$(CC) $(CFLAGS) -c $< -o $@ #-c prevents it from creating an executable (only created with linking .o objects after. $< represents .c file and -o $@ represents the .o file

#clean rule (removes .o files, but not the static library)
clean:
	@@echo "Removing objects..."
	@rm -f $(OBJS) #-f forces the removal of files supressing possible errors

fclean: clean #removes objects and library
	@@echo "Removing library..."
	@rm -f $(NAME)

re: fclean $(NAME) #recompiles everything
