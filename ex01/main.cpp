#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"
#include <cstdio>

int	main(void)
{
	Animal *tab[4];
	Dog a;
	Dog b(a);
	b.showIdeas();
	a.newIdea("manger");
	b.showIdeas();
	for (int i = 0 ; i < 4 ; i++)
	{
		if (i % 2 == 0)
			tab[i] = new Cat();
		else
			tab[i] = new Dog();
	}
	for (int i = 0 ; i < 4 ; i++)
		delete tab[i];
	return (0);
}