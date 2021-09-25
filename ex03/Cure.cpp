#include "Cure.hpp"

Cure::Cure() : AMateria("Cure") {}

Cure::Cure(string const &type) : AMateria(type) {}

Cure& Cure::operator=(const Cure &src)
{
	if (*this == src)
		return *this;
	else
		type = src.getType();
}
