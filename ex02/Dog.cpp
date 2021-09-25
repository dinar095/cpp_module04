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

Dog& Dog::operator=(Dog &src)
{
	if (this == &src)
		return *this;
	else
	{
		_type = src.getType();
		if (src.getBrain())
			_brain = new Brain(*src.getBrain());
	}
	return *this;
}

Dog::Dog(Dog &dog)
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

Brain* Dog::getBrain()
{
	if (_brain)
		return _brain;
	return NULL;
}