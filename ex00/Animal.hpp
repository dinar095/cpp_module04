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
	Animal(void);
	virtual ~Animal();
	Animal& operator=(const Animal &src);
	Animal(const Animal& src);
	virtual void makeSound() const;
	virtual string getType() const;

protected:
	string _type;
};

std::ostream& operator<<(std::ostream &out, Animal const &src);

#endif
