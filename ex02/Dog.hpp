#ifndef CPP_MODULE04_DOG_HPP
#define CPP_MODULE04_DOG_HPP
#pragma once

#include "Animal.hpp"
#include "Brain.hpp"



class Dog : public Animal
{
public:
	Dog(void);
	virtual ~Dog();
	Dog& operator=(Dog& src);
	Dog(Dog& dog);
	virtual void makeSound() const;
	virtual string getType() const;
	Brain *getBrain();

private:
	Brain *_brain;
};


#endif
