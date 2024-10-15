#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	_type = "Wrong Cat";
	std::cout << "Wrong Cat constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "Wrong Cat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "Weird cat sound" << std::endl;
}