#ifndef CPP_MODULE04_BRAIN_HPP
#define CPP_MODULE04_BRAIN_HPP
#pragma once
#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Brain
{
public:
	Brain();
	~Brain();
	Brain& operator=(const Brain& src);
	Brain(const Brain& src);

protected:
	string _ideas[100];
};


#endif //CPP_MODULE04_BRAIN_HPP
