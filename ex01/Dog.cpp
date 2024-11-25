#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	brain = new Brain();
	_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	brain = other.brain;
	this->_type = other._type;
}

Dog	&Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		delete brain;
		brain = new Brain(*other.brain);
		this->_type = other._type;
	}
	return (*this);
}

Dog::~Dog(void)
{
	delete brain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouf" << std::endl;
}

void	Dog::new_idea(std::string idea)
{
	int	i;

	i = 0;
	while (i < 100 && brain->ideas[i].empty() == 0)
		i++;
	brain->ideas[i] = idea;
}

void	Dog::show_ideas(void) const
{
	int	i;

	i = 0;
	while (i < 100 && brain->ideas[i].empty() == 0)
		std::cout << brain->ideas[i++] << std::endl;
}