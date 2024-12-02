#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	std::cout << "Ice constructor called" << std::endl;
}

Ice::~Ice(void)
{
	std::cout << "Ice destructor called" << std::endl;
}

Ice::Ice(const Ice& other) : AMateria(other)
{
	std::cout << "Ice copy constructor called" << std::endl;
}

Ice&	Ice::operator=(const Ice& other)
{
	std::cout << "Ice assignation constructor called" << std::endl;
	return *this;
}

void	Ice::use(const ICharacter& target) const
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *";
}

Ice	*Ice::clone(void) const
{
	return new Ice(*this);
}