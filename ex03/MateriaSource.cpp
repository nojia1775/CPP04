#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void) : IMateriaSource()
{
	std::cout << "MateriaSource constructor called" << std::endl;
}

MateriaSource::~MateriaSource(void)
{
	std::cout << "MateriaSource destructor called" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource& other) : IMateriaSource(other)
{
	std::cout << "MateriaSource copy constructor called" << std::endl;
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& other)
{
	if (this != &other)
	{
		if (_memory[0])
			delete _memory[0];
		_memory[0] = other._memory[0]->clone();
		if (_memory[1])
			delete _memory[1];
		_memory[1] = other._memory[1]->clone();
		if (_memory[2])
			delete _memory[2];
		_memory[2] = other._memory[2]->clone();
		if (_memory[3])
			delete _memory[3];
		_memory[3] = other._memory[3]->clone();
	}
	std::cout << "IMateriaSource assignation contructor called" << std::endl;
	return *this;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
		if (_memory[i] == NULL)
			break;
	if (i == 4)
		return;
	_memory[i] = materia;
}

AMateria	*MateriaSource::createMateria(const std::string& type)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
		if (_memory[i]->getType() == type)
			break;
	if (i == 4)
		return NULL;
	return _memory[i]->clone();
}