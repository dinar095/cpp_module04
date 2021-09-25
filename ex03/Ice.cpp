#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {}


Ice::Ice(string const &type) : AMateria(type) {}

AMateria* Ice::clone() const
{
	AMateria* clone = new Ice(type);
	return clone;
}

void Ice::use(ICharacter& target)
{
	cout << "* shoots an ice bolt at " << target.getName() << " *" << endl;
}

Ice& Ice::operator=(const Ice &src)
{
	if (this == &src)
		return *this;
	else
		this->type = src.type;
	return *this;
}

Ice::Ice(const Ice &src)
{
	*this = src;
}