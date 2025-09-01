#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <vector>
# include <deque>
# include <iostream>
# include <sstream>
# include <ctime>
# include <sys/time.h>
# include <algorithm>
# include <stdexcept>

class	PmergeMe{

public:

	PmergeMe(void);
	PmergeMe(const PmergeMe &rhs);
	~PmergeMe(void);

	PmergeMe	&operator=(const PmergeMe &rhs);

	void	execute(int ac, char **av);

private:

	std::vector<int>	_vectorData;
	std::vector<int>	_dequeData;

	void	fordJohnsonSort(std::vector<int> &container);
	void	mergeInsertVector(std::vector<int> &container, int left, int right);
	void	insertionSortVector(std::vector<int> &container, int left, int right);

	void	fordJohnsonSort(std::deque<int> &container);
	void	mergeInsertDeque(std::deque<int> &container, int left, int right);
	void	insertionSortDeque(std::deque<int> &container, int left, int right);

	bool	isValidNumber(const std::string &str);
	double	getTimeDifference(struct timeval start, struct timeval end);
	void	parseArgs(int ac, char **av);
	void	displaySequence(const std::vector<int> &container, const std::string &label);
};

#endif