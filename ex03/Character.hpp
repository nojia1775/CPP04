#ifndef CHARACTER_HPP

# define CHARACTER_HPP

# include "ICharacter.hpp"

class	Character : public ICharacter
{
	public:
					Character(const std::string name);
					~Character(void);

					Character(const Character& other);
		Character&		operator=(const Character& other);

		const std::string&	getName(void) const;
		void			equip(AMateria *materia);
		void			unequip(int idx);
		void			use(int idx, ICharacter& target);
};

#endif