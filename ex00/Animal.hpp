#ifndef ANIMAL_HPP

# define ANIMAL_HPP

# include <iostream>
# include <string>

class	Animal
{
	protected:
		std::string	_type;

	public:
				Animal(void);
		virtual		~Animal(void);

				Animal(const Animal& other);
		Animal&		operator=(const Animal& other);

		std::string	getType(void) const;
		virtual void	makeSound(void) const;
};

#endif