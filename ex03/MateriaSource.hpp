#ifndef MATERIASOURCE_HPP

# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class	MateriaSource : public IMateriaSource
{
	public:
				MateriaSource(void);
				~MateriaSource(void);

				MateriaSource(const MateriaSource& other);
		MateriaSource&	operator=(const MateriaSource& other);

		void		learnMateria(AMateria *materia);
		AMateria	*createMateria(const std::string& type);
};

#endif