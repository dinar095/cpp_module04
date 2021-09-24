#ifndef CPP_MODULE04_CAT_HPP
#define CPP_MODULE04_CAT_HPP
#pragma once

#include "Animal.hpp"


class Cat : public Animal
{
public:
	Cat(void);
	virtual ~Cat();
	Cat& operator=(const Cat& src);
	Cat(const Cat& src);
	virtual void makeSound() const;
	virtual string getType() const;
};


#endif
