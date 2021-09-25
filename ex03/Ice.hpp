#ifndef CPP_MODULE04_ICE_HPP
#define CPP_MODULE04_ICE_HPP

#include "Amateria.hpp"
#include "Icharacter.hpp"


class Ice : public  AMateria
{
	Ice();
	Ice(string const &type);
	~Ice() {};
	Ice(const Ice &src);
	Ice& operator=(const Ice &src);
	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //CPP_MODULE04_ICE_HPP
