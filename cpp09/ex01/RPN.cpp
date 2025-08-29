#include "RPN.hpp"

//==================== Contructors N Destructor ===================//

RPN::RPN(void)
{
	return ;
}

RPN::RPN(const RPN &rhs) : _stack(rhs._stack)
{
	return ;
}

RPN::~RPN(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//

RPN	&RPN::operator=(const RPN &rhs)
{
	if (this != &rhs)
	{
		_stack = rhs._stack;
	}
	return (*this);
}

//======================= Member functions ========================//

bool	RPN::isOperator(char c) const
{
	return (c == '+' || c == '-' || c == '*' || c == '/');
}

bool	RPN::isDigit(char c) const
{
	return (c >= '0' && c <= '9');
}

int		RPN::operation(int a, int b, char op) const
{
	switch (op)
	{
		case '+': return (a + b);
		case '-': return (a - b);
		case '*': return (a * b);
		case '/':
			if (b == 0)
				throw std::runtime_error("Error: cannot divide by 0");
			return (a / b);
		default:
			throw std::runtime_error("Error: invalid operator");
	}
}

int		RPN::polish(const std::string &input)
{
	std::istringstream	iss(input);
	std::string			tok;

	while (iss >> tok)
	{
		if (tok.length() == 1 && isDigit(tok[0]))
			_stack.push(tok[0] - '0');
		else if (tok.length() == 1 && isOperator(tok[0]))
		{
			if (_stack.size() < 2)
				throw std::runtime_error("Error: insufficient operands");
			int	b = _stack.top(); _stack.pop();
			int	a = _stack.top(); _stack.pop();
			int	result = operation(a, b, tok[0]);
			_stack.push(result);
		}
		else
			throw	std::runtime_error("Error: invalid token");
		}
	if (_stack.size() != 1)
		throw std::runtime_error("Error: invalid input");
	return (_stack.top());
}