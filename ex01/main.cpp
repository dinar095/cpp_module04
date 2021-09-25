#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"
#define COUNT 10


int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	delete j;//should not create a leak
	delete i;

	Animal *staya[COUNT];

	for (int i = 0; i < COUNT; i++)
	{
		if (i % 2)
			staya[i] = new Cat();
		else
			staya[i] = new Dog();
	}
	Cat *mau = new Cat(*dynamic_cast<Cat *>(staya[1]));
//	dynamic_cast<Cat *>(staya[1])->getBrain()->printIdeas();
//	cout << "=====================" << endl;
	for (int i = 0; i < COUNT; i++)
		delete staya[i];
	mau->getBrain()->printIdeas();

	Animal *animal = mau;
	delete animal;
}