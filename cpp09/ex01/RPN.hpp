#ifndef RPN_HPP
# define RPN_HPP

# include <stack>
# include <algorithm>
# include <iostream>
# include <sstream>
// # include <stdexcept>

class	RPN{

public:

	RPN(void);
	RPN(const RPN &rhs);
	~RPN(void);

	RPN	&operator=(const RPN &rhs);

	int	polish(const std::string &input);

private:

	std::stack<int>	_stack;

	bool	isOperator(char c) const;
	bool	isDigit(char c) const;
	int		operation(int a, int b, char op) const;
};

#endif