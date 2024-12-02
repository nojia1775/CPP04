#include "ICharacter.hpp"

ICharacter::ICharacter(const std::string name) : _name(name)
{
	std::cout << "ICharacter constructor called" << std::endl;
	_inventory[0] = NULL;
	_inventory[1] = NULL;
	_inventory[2] = NULL;
	_inventory[3] = NULL;
}

ICharacter::~ICharacter(void)
{
	if (_inventory[0])
		delete _inventory[0];
	if (_inventory[1])
		delete _inventory[1];
	if (_inventory[2])
		delete _inventory[2];
	if (_inventory[3])
		delete _inventory[3];
	std::cout << "ICharacter destructor called" << std::endl;
}

ICharacter::ICharacter(const ICharacter& other) : _name(other._name)
{
	if (_inventory[0])
		delete _inventory[0];
	_inventory[0] = other._inventory[0]->clone();
	if (_inventory[1])
		delete _inventory[1];
	_inventory[1] = other._inventory[1]->clone();
	if (_inventory[2])
		delete _inventory[2];
	_inventory[2] = other._inventory[2]->clone();
	if (_inventory[3])
		delete _inventory[3];
	_inventory[3] = other._inventory[3]->clone();
	std::cout << "ICharacter copy constructor called" << std::endl;
}

ICharacter&	ICharacter::operator=(const ICharacter& other)
{
	if (this != &other)
	{
		if (_inventory[0])
			delete _inventory[0];
		_inventory[0] = other._inventory[0]->clone();
		if (_inventory[1])
			delete _inventory[1];
		_inventory[1] = other._inventory[1]->clone();
		if (_inventory[2])
			delete _inventory[2];
		_inventory[2] = other._inventory[2]->clone();
		if (_inventory[3])
			delete _inventory[3];
		_inventory[3] = other._inventory[3]->clone();
	}
	return *this;
}