#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	int sizeStado = 10;
	Animal *stado[sizeStado];

	for (int i = 0; i < sizeStado; i++)
	{
		if (i % 2)
			stado[i] = new Cat();
		else
			stado[i] = new Dog();
	}

	for (int i = 0; i < sizeStado; i++)
		delete stado[i];


}