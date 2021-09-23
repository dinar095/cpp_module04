#include "Animal.hpp"

Animal::Animal() : _type("Animal")
{
	cout << "Animal constructor" << endl;
}


Animal::~Animal()
{
	cout << "Animal destructor" << endl;
}

Animal::Animal(const Animal &src)
{
	*this = src;
}

Animal& Animal::operator=(const Animal& src)
{
	if (this == &src)
		return *this;
	else
	{
		_type = src.getType();
		return *this;
	}

}

string Animal::getType() const
{
	return _type;
}

void Animal::makeSound() const
{
	cout << getType() << endl;
}

std::ostream& operator<<(std::ostream &out, Animal const &src)
{
	out << src.getType();
	return out;
}