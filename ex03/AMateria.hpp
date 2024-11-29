#ifndef AMATERIA_HPP

# define AMATERIA_HPP

# include <iostream>
# include "ICharacter.hpp"

class	AMateria
{
	protected:
		const std::string	_type;

	public:
					AMateria(const std::string& type);
		virtual			~AMateria(void);

					AMateria(const AMateria& other);
		AMateria&		operator=(const AMateria& other);

		const std::string&	getType(void) const; //Returns the materia type
		virtual AMateria	*clone(void) const = 0;
		virtual void		use(ICharacter& target);
};

#endif