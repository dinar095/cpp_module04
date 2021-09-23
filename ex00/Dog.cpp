#include "Dog.hpp"

Dog::Dog()
{
	_type = "dog";
}

Dog::Dog(string type) : Animal(type) {}

string Dog::getType() const
{
	return _type;
}

void Dog::makeSound() const
{
	cout << getType() << endl;
}
