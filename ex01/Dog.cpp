#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	_brain = new Brain();
	_type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
	std::cout << "Copy constructor Dog called" << std::endl;
	_brain = new Brain(*other._brain);
	this->_type = other._type;
}

Dog	&Dog::operator=(const Dog& other)
{
	if (this != &other)
	{
		delete _brain;
		_brain = new Brain(*other._brain);
		this->_type = other._type;
	}
	return (*this);
}

Dog::~Dog(void)
{
	delete _brain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Wouf" << std::endl;
}

void	Dog::newIdea(std::string idea)
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

void	Dog::showIdeas(void) const
{
	int	i;

	for (i = 0 ; i < 100 ; i++)
	{
		if (_brain->ideas[i].empty())
			break;
		std::cout << _brain->ideas[i] << std::endl;
	}
	if (i == 0)
		std::cout << "There is no idea" << std::endl;
}