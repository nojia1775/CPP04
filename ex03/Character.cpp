#include "Character.hpp"

Character::Character(const std::string name) : ICharacter(name)
{
	std::cout << "Character constructor called" << std::endl;
}

Character::~Character(void)
{
	std::cout << "Character destructor called" << std::endl;
}

Character::Character(const Character& other) : ICharacter(other)
{
	std::cout << "Character copy constructor called" << std::endl;
}

Character&	Character::operator=(const Character& other)
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
		std::cout << "Character copy constructor called" << std::endl;
	}
	return *this;
}

const std::string&	Character::getName(void) const
{
	return _name;
}

void	Character::equip(AMateria *materia)
{
	int	i;

	for (i = 0 ; i < 4 ; i++)
		if (_inventory[i] == NULL)
			break;
	if (i == 4)
		return;
	_inventory[i] = materia;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return;
	if (_inventory[idx])
		_inventory[idx] = NULL;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return;
	if (_inventory[idx] == NULL)
		return;
	_inventory[idx]->use(target);
	unequip(idx);
}