#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	_type = "Wrong Cat";
	std::cout << "Wrong Cat constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
	this->_type = other._type;
}

WrongCat	&WrongCat::operator=(const WrongCat& other)
{
	if (this != &other)
		this->_type = other._type;
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "Wrong Cat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Weird cat sound" << std::endl;
}