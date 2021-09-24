#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	_type = "WrongAnimal";
}


WrongAnimal::~WrongAnimal() {}

WrongAnimal::WrongAnimal(const WrongAnimal &src)
{
	*this = src;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& src)
{
	if (this == &src)
		return *this;
	else
	{
		_type = src.getType();
		return *this;
	}

}

string WrongAnimal::getType() const
{
	return _type;
}

void WrongAnimal::makeSound() const
{
	cout << _type << endl;
	cout << "From Animal" << endl;

}

std::ostream& operator<<(std::ostream &out, WrongAnimal const &src)
{
	out << src.getType();
	return out;
}