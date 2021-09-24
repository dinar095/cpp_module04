#include "Cat.hpp"

Cat::Cat()
{
	_brain = new Brain();
	_type = "Cat";
	cout << "Cat constructor" << endl;
}

Cat::~Cat()
{
	delete _brain;
	cout << "Cat destructor" << endl;
}

Cat::Cat(const Cat &src)
{
	*this = src;
}

Cat& Cat::operator=(const Cat& src)
{
	if (this == &src)
		return *this;
	else
		_type = src.getType();
	return *this;
}

string Cat::getType() const
{
	return _type;
}

void Cat::makeSound() const
{
	cout << _type << endl;
}

std::ostream& operator<<(std::ostream& out, Cat const& src)
{
	out << src.getType();
	return out;
}