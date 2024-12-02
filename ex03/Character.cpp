#include "Character.hpp"

Character::Character(const std::string name) : ICharacter(name)
{
	_cache[0] = NULL;
	_cache[1] = NULL;
	_cache[2] = NULL;
	_cache[3] = NULL;
	_cache[4] = NULL;
	std::cout << "Character constructor called" << std::endl;
}

Character::~Character(void)
{
	deleteCache();
	std::cout << "Character destructor called" << std::endl;
}

Character::Character(const Character& other) : ICharacter(other)
{
	_cache[0] = other._cache[0]->clone();
	_cache[1] = other._cache[1]->clone();
	_cache[2] = other._cache[2]->clone();
	_cache[3] = other._cache[3]->clone();
	_cache[4] = other._cache[4]->clone();
	std::cout << "Character copy constructor called" << std::endl;
}

Character&	Character::operator=(const Character& other)
{
	if (this != &other)
	{
		_inventory[0] = other._inventory[0]->clone();
		_inventory[1] = other._inventory[1]->clone();
		_inventory[2] = other._inventory[2]->clone();
		_inventory[3] = other._inventory[3]->clone();
		_cache[0] = other._cache[0]->clone();
		_cache[1] = other._cache[1]->clone();
		_cache[2] = other._cache[2]->clone();
		_cache[3] = other._cache[3]->clone();
		_cache[4] = other._cache[4]->clone();
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
	if (_inventory[idx] == NULL)
		return;
	addCache(_inventory[idx]);
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

void	Character::deleteCache(void)
{
	for (int i = 0 ; i < 5 ; i++)
	{
		if (_cache[i])
		{
			delete _cache[i];
			_cache[i] = NULL;
		}
	}
}

void	Character::addCache(AMateria *materia)
{
	int i;
	for (i = 0 ; i < 5 ; i++)
		if (_cache[i] == NULL)
			break;
	if (i == 5)
	{
		deleteCache();
		_cache[0] = materia;
	}
	else
		_cache[i] = materia;
}