#include "Amateria.hpp"

AMateria::AMateria(const string &type)
{
	this->type = type;
}

AMateria::AMateria()
{

}

std::string const &AMateria::getType() const
{
	return type;
}

void AMateria::use(ICharacter &target)
{

}

