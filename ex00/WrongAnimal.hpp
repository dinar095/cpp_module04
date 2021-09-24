#ifndef CPP_MODULE04_WRONGANIMAL_HPP
#define CPP_MODULE04_WRONGANIMAL_HPP
#pragma once
#include <iostream>


using std::cout;
using std::endl;
using std::string;

class WrongAnimal
{
public:
	WrongAnimal();
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal &src);
	WrongAnimal& operator=(const WrongAnimal& src);
	void makeSound() const;
	string getType() const;

protected:
	string _type;
};

std::ostream& operator<<(std::ostream &out, WrongAnimal const &src);

#endif //CPP_MODULE04_WRONGANIMAL_HPP
