#ifndef DOG_HPP

# define DOG_HPP

# include "Animal.hpp"
# include "Brain.hpp"

class	Dog : public Animal
{
	private:
		Brain	*_brain;

	public:
			Dog(void);
			Dog(const Dog& other);
		Dog	&operator=(const Dog& other);
			~Dog(void);

		void	makeSound(void) const;
		void	newIdea(std::string idea);
		void	showIdeas(void) const;
};

#endif