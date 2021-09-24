#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	cout << "\n********Dog********" << endl;
	std::cout << j->getType() << " " << std::endl;
	cout << "\n********Cat********" << endl;
	std::cout << i->getType() << " " << std::endl;
	cout << "\n********Cat********" << endl;
	i->makeSound(); //will output the cat sound!
	cout << "\n********Dog********" << endl;
	j->makeSound();
	cout << "\n********Animal********" << endl;
	meta->makeSound();
	delete meta;
	delete j;
	delete i;


	const WrongAnimal*		meta2 = new WrongAnimal();
	const WrongAnimal*	wrCat = new WrongCat();
	cout << "\n********WrongCat********" << endl;
	wrCat->makeSound();
	cout << "\n********WrongAnimal********" << endl;
	meta2->makeSound();

}