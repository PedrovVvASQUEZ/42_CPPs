#include "PmergeMe.hpp"

//==================== Contructors N Destructor ===================//

PmergeMe::PmergeMe(void)
{
	return ;
}

PmergeMe::PmergeMe(const PmergeMe &rhs) : _vectorData(rhs._vectorData), _dequeData(rhs._dequeData)
{
	return ;
}

PmergeMe::~PmergeMe(void)
{
	return ;
}

//=============== Operators Overload Member Functions =============//

PmergeMe	&PmergeMe::operator=(const PmergeMe &rhs)
{
	if (this != &rhs)
	{
		_vectorData = rhs._vectorData;
		_dequeData = rhs._dequeData;
	}
	return (*this);
}

//======================= Member functions ========================//

bool	PmergeMe::isValidIntpos(const std::string &str)
{
	if (str.empty())
		return (false);
	for (size_t i = 0; i < str.length(); i++)
	{
		if (!std::isdigit(str[i]))
			return (false);
	}
	long	num = std::atol(str.c_str());
	return (num >= 0 && num <= std::numeric_limits<int>::max());
}

double	PmergeMe::getTimeDifference(struct timeval start, struct timeval end)
{
	return (end.tv_sec - start.tv_sec) * 1000000.0 + (end.tv_usec - start.tv_usec);
}

void	PmergeMe::parseArgs(int ac, char **av)
{
	for (int i = 1; i < ac; i++)
	{
		std::string	arg(av[i]);
		if (!isValidIntpos(arg))
			throw std::runtime_error("Error");
		int	num = std::atoi(arg.c_str());
		_vectorData.push_back(num);
		_dequeData.push_back(num);
	}
	if (_vectorData.empty())
		throw std::runtime_error("Error");
}

void	PmergeMe::displaySequence(const std::vector<int> &container, const std::string &label)
{
	std::cout << label;
	for (size_t i = 0; i < container.size() && i < 4; i++)
		std::cout << container[i] << " ";
	if (container.size() > 4)
		std::cout << "[...]";
	std::cout << std::endl;
}

// //==================== Ford-Johnson for Vector ===================//

void	PmergeMe::insertionSortVector(std::vector<int> &container, int left, int right)
{
	for (int i = left + 1; i <= right; i++)
	{
		int	key = container[i];
		int	j = i - 1;
		while (j >= left && container[j] > key)
		{
			container[j + 1] = container[j];
			j--;
		}
		container[j + 1] = key;
	}
}

void	PmergeMe::mergeInsertVector(std::vector<int> &container, int left, int right)
{
	if (right - left < 10)
	{
		insertionSortVector(container, left, right);
		return ;
	}
	int	mid = left + (right - left) / 2;
	mergeInsertVector(container, left, mid);
	mergeInsertVector(container, mid + 1, right);
	std::vector<int>	temp(right - left + 1);
	int	i = left;
	int	j = mid + 1;
	int	k = 0;
	while (i <= mid && j <= right)
	{
		if (container[i] <= container[j])
			temp[k++] = container[i++];
		else
			temp[k++] = container[j++];
	}
	while (i <= mid)
		temp[k++] = container[i++];
	while (j <= right)
		temp[k++] = container[j++];
	for (int i = 0; i < k; i++)
		container[left + i] = temp[i];
}

void	PmergeMe::fordJohnsonSort(std::vector<int> &container)
{
	if (container.size() <= 1)
		return ;
	mergeInsertVector(container, 0, container.size() - 1);
}

// //==================== Ford-Johnson for Deque ===================//

void PmergeMe::insertionSortDeque(std::deque<int>& container, int left, int right)
{
	for (int i = left + 1; i <= right; i++)
	{
		int key = container[i];
		int j = i - 1;
		
		while (j >= left && container[j] > key)
		{
			container[j + 1] = container[j];
			j--;
		}
		container[j + 1] = key;
	}
}

void PmergeMe::mergeInsertDeque(std::deque<int>& container, int left, int right)
{
	if (right - left < 10)
	{
		insertionSortDeque(container, left, right);
		return;
	}
	int mid = left + (right - left) / 2;
	mergeInsertDeque(container, left, mid);
	mergeInsertDeque(container, mid + 1, right);
	// Merge
	std::deque<int>	temp;
	int	i = left;
	int	j = mid + 1;
	while (i <= mid && j <= right)
	{
		if (container[i] <= container[j])
			temp.push_back(container[i++]);
		else
			temp.push_back(container[j++]);
	}
	while (i <= mid)
		temp.push_back(container[i++]);
	while (j <= right)
		temp.push_back(container[j++]);
	for (size_t k = 0; k < temp.size(); k++)
		container[left + k] = temp[k];
}

void PmergeMe::fordJohnsonSort(std::deque<int>& container)
{
	if (container.size() <= 1)
		return;
	mergeInsertDeque(container, 0, container.size() - 1);
}

// //==================== Public Methods ===================//

void PmergeMe::execute(int argc, char** argv)
{
	struct timeval	start;
	struct timeval	end;

	/***  Vector  ***/
	parseArgs(argc, argv);
	displaySequence(_vectorData, "Before: ");
	gettimeofday(&start, NULL);
	fordJohnsonSort(_vectorData);
	gettimeofday(&end, NULL);
	double vectorTime = getTimeDifference(start, end);

	/***  Deque  ***/
	gettimeofday(&start, NULL);
	fordJohnsonSort(_dequeData);
	gettimeofday(&end, NULL);
	double dequeTime = getTimeDifference(start, end);
	displaySequence(_vectorData, "After:  ");
	std::cout << "Time to process a range of " << _vectorData.size() 
			  << " elements with std::vector : " << vectorTime << " us" << std::endl;
	std::cout << "Time to process a range of " << _dequeData.size() 
			  << " elements with std::deque  : " << dequeTime << " us" << std::endl;
}