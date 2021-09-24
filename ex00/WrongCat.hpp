#ifndef CPP_MODULE04_WRONGCAT_HPP
#define CPP_MODULE04_WRONGCAT_HPP
#pragma once

#include "WrongAnimal.hpp"


class WrongCat : public WrongAnimal
{
public:
	WrongCat();
	~WrongCat() {};
	WrongCat& operator=(const WrongCat& src);
	WrongCat(const WrongCat& src);
	void makeSound() const;
	string getType() const;
};


#endif //CPP_MODULE04_WRONGCAT_HPP
