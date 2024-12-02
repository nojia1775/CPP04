#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure")
{
	std::cout << "Cure constructor called" << std::endl;
}

Cure::~Cure(void)
{
	std::cout << "Cure destructor called" << std::endl;
}

Cure::Cure(const Cure& other) : AMateria(other)
{
	std::cout << "Cure copy constructor called" << std::endl;
}

Cure&	Cure::operator=(const Cure& other)
{
	(void)other;
	std::cout << "Cure assignation constructor called" << std::endl;
	return *this;
}

void	Cure::use(ICharacter& target)
{
	std::cout << "* heals "<< target.getName() << "'s wounds *" << std::endl;
}

Cure	*Cure::clone(void) const
{
	return new Cure(*this);
}