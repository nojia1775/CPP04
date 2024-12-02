#ifndef IMATERIASOURCE_HPP

# define IMATERIASOURCE_HPP

# include <iostream>
# include "AMateria.hpp"

class	IMateriaSource
{
	protected:
		AMateria	*_memory[4];

	public:
					IMateriaSource(void);
		virtual			~IMateriaSource(void);

					IMateriaSource(const IMateriaSource& other);
		IMateriaSource&		operator=(const IMateriaSource& other);

		virtual void		learnMateria(AMateria *materia) = 0;
		virtual AMateria	*createMateria(const std::string& type) = 0;
};

#endif