#include "AMateria.hpp"

AMateria::AMateria(const std::string& type) : _type(type)
{
	std::cout << "AMateria constructor called" << std::endl;
}

AMateria::~AMateria(void)
{
	std::cout << "AMateria destructor called" << std::endl;
}

AMateria::AMateria(const AMateria& other) : _type(other._type)
{
	std::cout << "AMateria copy constructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& other)
{
	(void)other;
	return *this;	
}	

const std::string&	AMateria::getType(void) const
{
	return _type;
}

void	AMateria ::use(ICharacter& target)
{
	std::cout << _type << " used on " << target.getName() << std::endl;
	return;
}
