#include "Character.hpp"


Character::Character()
{
	for (int i = 0; i < 4; i++)
		bag[i] = NULL;
	name = "noname";
}

Character::Character(string name)
{
	for (int i = 0; i < 4; i++)
		bag[i] = NULL;
	this->name = name;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
		if (bag[i])
			delete bag[i];
}

string const & Character::getName() const
{
	return name;
}

void Character::equip(AMateria *m)
{
	for (int i = 0; i < 4; i++)
		if (!bag[i])
		{
			bag[i] = m;
			break;
		}
}

void Character::unequip(int idx)
{
	if (idx >= 0 && idx < 4)
		bag[idx] = NULL;
}

void Character::use(int idx, ICharacter &target)
{
	if (idx >= 0 && idx < 4 && bag[idx])
		bag[idx]->use(target);
}

Character& Character::operator=(const Character &src)
{
	if (this == &src)
		return *this;
	for (int i = 0; i < 4; i++)
	{
		if (bag[i])
			delete bag[i];
	}
	for (int i = 0; i < 4; i++)
		bag[i] = src.bag[i]->clone();
	name = src.getName();
	return *this;
}

Character::Character(const Character& src)
{
	for (int i = 0; i < 4; i++)
		bag[i] = NULL;
	*this = src;
}


