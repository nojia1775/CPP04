#ifndef CHARACTER_HPP

# define CHARACTER_HPP

# include "ICharacter.hpp"

class AMateria;

class	Character : public ICharacter
{
	private:
		AMateria		*_cache[5];

	public:
					Character(const std::string name);
					~Character(void);

					Character(const Character& other);
		Character&		operator=(const Character& other);

		const std::string&	getName(void) const;
		void			equip(AMateria *materia);
		void			unequip(int idx);
		void			use(int idx, ICharacter& target);
		void				deleteCache(void);
		void				addCache(AMateria *materia);
};

#endif