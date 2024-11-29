#ifndef ICE_HPP

# define ICE_HPP

# include "AMateria.hpp"

class	Ice : public AMateria
{
	public:
			Ice(void);
			~Ice(void);

			Ice(const Ice& other);
	Ice&		operator=(const Ice& other);

	void		use(void) const;
	Ice		*clone(void) const;
};

#endif