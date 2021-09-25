#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") {}

Cure::Cure(string const &type) : AMateria(type) {}

Cure& Cure::operator=(const Cure &src)
{
	if (this == &src)
		return *this;
	else
		type = src.getType();
}
Cure::Cure(const Cure &src)
{
	*this = src;
}

AMateria* Cure::clone() const
{
	AMateria* clone = new Cure(this->type);
	return clone;
}

void Cure::use(ICharacter& target)
{
	cout <<  "* heals " << target.getName() << " wounds *" << endl;
}