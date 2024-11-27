#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain::Brain(const Brain& other)
{
	std::cout << "Copy constructor Brain called" << std::endl;
	for (int i = 0 ; i < 100 ; i++)
		ideas[i] = other.ideas[i];
}

Brain&	Brain::operator=(const Brain& other)
{
	if (this == &other)
		return *this;
	for (int i = 0 ; i < 100 ; i++)
		ideas[i] = other.ideas[i];
	return *this;
}