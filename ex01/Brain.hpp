#ifndef BRAIN_HPP

# define BRAIN_HPP

# include <iostream>
# include <string>

class	Brain
{
	public:
				Brain(void);
				Brain(const Brain& other);
		Brain&		operator=(const Brain& other);
				~Brain(void);
		std::string	ideas[100];
};

#endif