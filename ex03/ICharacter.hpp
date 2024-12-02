#ifndef ICHARACTER_HPP

# define ICHARACTER_HPP

# include <iostream>
# include "AMateria.hpp"

class	ICharacter
{
	protected:
		const std::string		_name;
		AMateria			*_inventory[4];

	public:
						ICharacter(const std::string name);
		virtual				~ICharacter(void);

						ICharacter(const ICharacter& other);
		ICharacter&			operator=(const ICharacter& other);

		virtual const std::string&	getName(void) const = 0;
		virtual void			equip(AMateria *materia) = 0;
		virtual void			unequip(int idx) = 0;
		virtual void			use(int idx, ICharacter& target) = 0;
};

#endif