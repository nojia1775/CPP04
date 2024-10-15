#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <cstdio>

int	main(void)
{
	Cat	a;

	a.show_ideas();
	a.new_idea("manger");
	Cat b = a;
	b.show_ideas();
	/*Animal *tab[4];
	for (int i = 0 ; i < 4 ; i++)
	{
		if (i % 2 == 0)
			tab[i] = new Dog();
		else
			tab[i] = new Cat();
	}
	for (int k = 0 ; k < 4 ; k++)
		delete tab[k];*/
	return (0);
}