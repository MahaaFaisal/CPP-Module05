
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror -Wfatal-errors
SRCS = main.cpp Bureaucrat.cpp Utils.cpp AForm.cpp Exceptions.cpp PresidentialPardonForm.cpp ShrubberyCreationForm.cpp tests.cpp RobotomyRequestForm.cpp
NAME = bureaucrat

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all