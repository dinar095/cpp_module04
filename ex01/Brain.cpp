#include "Brain.hpp"

Brain::Brain()
{
	cout << "Brain constructor" << endl;
}

Brain::~Brain()
{
	cout << "Brain destructor" << endl;
}

Brain& Brain::operator=(const Brain& src)
{
	if (this == &src)
		return *this;
	else
		for (int i = 0; i < 100; i++)
			_ideas[i] = src._ideas[i];
	return *this;
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

