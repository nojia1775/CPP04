#include "Cat.hpp"
#include <cstdio>

Cat::Cat(void) : Animal()
{
	_brain = new Brain();
	_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete _brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	std::cout << "Copy constructor Cat called" << std::endl;
	_brain = new Brain(*other._brain);
	this->_type = other._type;
}

Cat	&Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		delete _brain;
		_brain = new Brain(*other._brain);
		_type = other._type;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

void	Cat::newIdea(std::string idea)
{
	int	i;

	for (i = 0 ; i < 100 ; i++)
		if (_brain->ideas[i].empty())
			break;
	if (i < 100)
		_brain->ideas[i] = idea;
	else
		std::cout << "Brain full" << std::endl;
}

void	Cat::showIdeas(void) const
{
	for (int i = 0 ; i < 100 ; i++)
	{
		if (_brain->ideas[i].empty())
		{
			if (i == 0)
				std::cout << "There is no idea" << std::endl;
			break;
		}
		std::cout << _brain->ideas[i] << std::endl;
	}
}