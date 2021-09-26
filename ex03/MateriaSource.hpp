#ifndef CPP_MODULE04_MATERIASOURCE_HPP
#define CPP_MODULE04_MATERIASOURCE_HPP


#include <iostream>
#include "IMateriaSource.hpp"
#include "Amateria.hpp"

using std::cout;
using std::endl;
using std::string;

class MateriaSource : public IMateriaSource
{
public:
	MateriaSource();
	~MateriaSource();
	void learnMateria(AMateria* src);
	AMateria* createMateria(std::string const & type);
	MateriaSource& operator=(const MateriaSource& src);
	MateriaSource(const MateriaSource& src);

private:
	AMateria* bag[4];
};


#endif //CPP_MODULE04_MATERIASOURCE_HPP
