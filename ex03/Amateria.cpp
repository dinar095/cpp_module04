#include "Amateria.hpp"

AMateria::AMateria(const string &type)
{
	this->type = type;
}

std::string const &AMateria::getType() const
{
	return type;
}

