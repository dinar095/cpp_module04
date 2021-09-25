#ifndef CPP_MODULE04_AMATERIA_HPP
#define CPP_MODULE04_AMATERIA_HPP
#pragma once

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class AMateria
{
protected:
	string type;

public:
	AMateria(std::string const & type);
	AMateria() {};
	virtual ~AMateria() {};
	std::string const & getType() const; //Returns the materia type
	virtual AMateria* clone() const = 0;
	virtual void use(ICharacter& target);
};


#endif //CPP_MODULE04_AMATERIA_HPP
