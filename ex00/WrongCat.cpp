#include "WrongCat.hpp"


WrongCat::WrongCat()
{
	_type = "WrongCat";
}

WrongCat& WrongCat::operator=(const WrongCat &src)
{
	if(this == &src)
		return *this;
	else
		_type = src.getType();
	return *this;
}

WrongCat::WrongCat(const WrongCat &src)
{
	*this = src;
}

void WrongCat::makeSound() const
{
	cout << _type << endl;
	cout << "From WrongCat" << endl;
}

string WrongCat::getType() const
{
	return _type;
}