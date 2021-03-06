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
	string	getRandomIdea();
	void	printIdeas() const;
	string* getIdeas();
protected:
	static const int ideas_size = 100;
	string _ideas[ideas_size];
};


#endif //CPP_MODULE04_BRAIN_HPP
