#ifndef CPP_MODULE04_CURE_HPP
#define CPP_MODULE04_CURE_HPP

#include "Amateria.hpp"
#include "Icharacter.hpp"

class Cure : public AMateria
{
public:
	Cure();
	Cure(string const &type);
	~Cure() {};
	Cure(const Cure &src);
	Cure& operator=(const Cure &src);
	AMateria* clone() const;
	void use(ICharacter& target);
};


#endif //CPP_MODULE04_CURE_HPP
