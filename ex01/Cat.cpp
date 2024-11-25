#include "Cat.hpp"
#include <cstdio>

Cat::Cat(void) : Animal()
{
	brain = new Brain();
	_type = "Cat";
	std::cout << "Cat constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete brain;
	std::cout << "Cat destructor called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
	brain = other.brain;
	this->_type = other._type;
}

Cat	&Cat::operator=(const Cat& other)
{
	if (this != &other)
	{
		delete brain;
		brain = new Brain(*other.brain);
		_type = other._type;
	}
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow" << std::endl;
}

void	Cat::new_idea(std::string idea)
{
	int	i;

	i = 0;
	while (i < 100 && brain->ideas[i].empty() == 0)
		i++;
	brain->ideas[i] = idea;
}

void	Cat::show_ideas(void) const
{
	int	i;

	i = 0;
	while (i < 100 && brain->ideas[i].empty() == 0)
	{
		std::cout << brain->ideas[i++] << std::endl;
	}
}