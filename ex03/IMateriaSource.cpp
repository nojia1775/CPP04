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