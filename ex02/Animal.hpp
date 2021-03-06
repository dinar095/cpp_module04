#ifndef CPP_MODULE04_ANIMAL_HPP
#define CPP_MODULE04_ANIMAL_HPP
#pragma once
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Animal
{
public:
	virtual ~Animal();
	Animal& operator=(const Animal &src);
	Animal(const Animal& src);
	virtual void makeSound() const = 0;
	virtual string getType() const = 0;
	Animal(void);

protected:
	string _type;
};

std::ostream& operator<<(std::ostream &out, Animal const &src);

#endif
