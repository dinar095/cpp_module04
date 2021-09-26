#ifndef CPP_MODULE04_CHARACTER_HPP
#define CPP_MODULE04_CHARACTER_HPP
#include <iostream>
#include "Icharacter.hpp"
#include "Amateria.hpp"

using std::cout;
using std::endl;
using std::string;

class Character : public ICharacter
{
public:
	Character();
	Character(string name);
	~Character();
	string const & getName() const;
	void equip(AMateria* m);
	void unequip(int idx);
	void use(int idx, ICharacter& target);
	Character& operator=(const Character& src);
	Character(const Character& src);

private:
	AMateria* bag[4];
	string name;
};


#endif //CPP_MODULE04_CHARACTER_HPP
