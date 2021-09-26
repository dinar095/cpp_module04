#include "MateriaSource.hpp"


MateriaSource::MateriaSource()
{
	for (int i = 0; i < 4; i++)
		bag[i] = NULL;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
		if (bag[i])
			delete bag[i];
}

void MateriaSource::learnMateria(AMateria *src)
{
	if (!src)
		return;
	for (int i = 0; i < 4; i++)
	{
		if (!bag[i])
		{
			bag[i] = src->clone();
			break;
		}
	}
}

AMateria* MateriaSource::createMateria(const std::string &type)
{
	for (int i = 0; i < 4; i++)
	{
		if (!bag[i])
			break;
		if (bag[i]->getType() == type)
			return bag[i]->clone();
	}
	return NULL;
}

MateriaSource& MateriaSource::operator=(const MateriaSource &src)
{
	if (this == &src)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (bag[i])
			delete bag[i];
		if (src.bag[i])
			bag[i] = src.bag[i]->clone();
	}
	return *this;
}

MateriaSource::MateriaSource(const MateriaSource &src)
{
	for (int i = 0; i < 4; i++)
		bag[i] = NULL;
	*this = src;
}
