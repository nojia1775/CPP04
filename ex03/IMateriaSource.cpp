#include "IMateriaSource.hpp"

IMateriaSource::IMateriaSource(void)
{
	_memory[0] = NULL;
	_memory[1] = NULL;
	_memory[2] = NULL;
	_memory[3] = NULL;
	std::cout << "IMateriaSource constructor called" << std::endl;
}

IMateriaSource::~IMateriaSource(void)
{
	if (_memory[0])
		delete _memory[0];
	if (_memory[1])
		delete _memory[1];
	if (_memory[2])
		delete _memory[2];
	if (_memory[3])
		delete _memory[3];
	std::cout << "IMateriaSource destructor called" << std::endl;
}

IMateriaSource::IMateriaSource(const IMateriaSource& other)
{
	_memory[0] = other._memory[0]->clone();
	_memory[1] = other._memory[1]->clone();
	_memory[2] = other._memory[2]->clone();
	_memory[3] = other._memory[3]->clone();
	std::cout << "IMateriaSource copy contructor called" << std::endl;
}

IMateriaSource&	IMateriaSource::operator=(const IMateriaSource& other)
{
	if (this != &other)
	{
		_memory[0] = other._memory[0]->clone();
		_memory[1] = other._memory[1]->clone();
		_memory[2] = other._memory[2]->clone();
		_memory[3] = other._memory[3]->clone();
	}
	std::cout << "IMateriaSource assignation contructor called" << std::endl;
	return *this;
}