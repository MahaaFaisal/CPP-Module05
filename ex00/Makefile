
CPP = c++
CPPFLAGS = -Wall -Wextra -Werror
SRCS = main.cpp Bureaucrat.cpp Utils.cpp tests.cpp
NAME = bureaucrat

all: $(NAME)

$(NAME): $(SRCS)
	$(CPP) $(CPPFLAGS) $(SRCS) -o $(NAME)

clean:
	rm -rf $(NAME)

re: clean all