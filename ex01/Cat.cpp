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

Cat::Cat(Cat &src)
{
	*this = src;
}

Cat& Cat::operator=(Cat& src)
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

Brain* Cat::getBrain()
{
	if (_brain)
		return _brain;
	return NULL;
}