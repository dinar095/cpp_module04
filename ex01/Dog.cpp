#include "Dog.hpp"

Dog::Dog()
{
	_type = "Dog";
	_brain = new Brain();
	cout << "Dog constructor" << endl;
}

Dog::~Dog()
{
	delete _brain;
	cout << "Dog destructor" << endl;
}

Dog& Dog::operator=(const Dog &src)
{
	if (this == &src)
		return *this;
	else
		_type = src.getType();
	return *this;
}

Dog::Dog(const Dog &dog)
{
	*this = dog;
}

string Dog::getType() const
{
	return _type;
}

void Dog::makeSound() const
{
	cout << _type << endl;
}
