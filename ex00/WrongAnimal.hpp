#ifndef WRONGANIMAL_HPP

# define WRONGANIMAL_HPP

# include <iostream>
# include <string>

class	WrongAnimal
{
	protected:
		std::string	_type;

	public:
				WrongAnimal();
		virtual		~WrongAnimal();

		std::string	getType(void) const;
		virtual void	makeSound(void) const;
};

#endif