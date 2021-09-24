#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#define RAND_MAX 5

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;
	int tt;
	srand(std::time(0));
	tt = std::rand() % 20;
	cout << tt << endl;
}