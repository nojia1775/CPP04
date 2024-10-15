#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void)
{
	_type = "default";
	std::cout << "Wrong Animal constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Wrong Animal destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "Wrong Animal sound" << std::endl;
}