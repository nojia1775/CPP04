#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();
	const WrongAnimal *w_meta = new WrongAnimal();
	const WrongAnimal *w_cat = new WrongCat();
	std::cout << meta->getType() << std::endl;
	std::cout << j->getType() << std::endl;
	std::cout << i->getType() << std::endl;
	std::cout << w_meta->getType() << std::endl;
	std::cout << w_cat->getType() << std::endl;
	j->makeSound();
	i->makeSound();
	meta->makeSound();
	w_meta->makeSound();
	w_cat->makeSound();
	delete meta;
	delete i;
	delete j;
	delete w_meta;
	delete w_cat;
	return (0);
}