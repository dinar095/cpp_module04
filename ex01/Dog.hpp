#ifndef CPP_MODULE04_DOG_HPP
#define CPP_MODULE04_DOG_HPP
#pragma once

#include "Animal.hpp"



class Dog : public Animal
{
public:
	Dog(void);
	~Dog() {};
	Dog& operator=(const Dog& src);
	Dog(const Dog& dog);
	virtual void makeSound() const;
	virtual string getType() const;
};


#endif
