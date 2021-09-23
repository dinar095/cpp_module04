#include "Dog.hpp"

Dog::Dog()
{
	cout << "Dog constructor" << endl;
	_type = "Dog";
}

Dog::~Dog()
{
	cout << "Dog destructor" << endl;
}

Dog& Dog::operator=(const Dog &src)
{
	if (this == &src)
		return *this;
	else
	{
		_type = src.getType();
		return *this;
	}
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
	cout << getType() << endl;
}
