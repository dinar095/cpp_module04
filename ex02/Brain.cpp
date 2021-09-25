#include "Brain.hpp"

Brain::Brain()
{
	for (int i = 0; i < ideas_size; i++)
		_ideas[i] = getRandomIdea();
	cout << "Brain constructor" << endl;
}

string Brain::getRandomIdea()
{
	string		oneIdea;
	static int	ra = 1;
	char		symb[] = "qwertyuiopasdfghjklzxcvbnm1234567890";

	std::srand(ra++);
	for (int i = 0; i < 11; i++)
		oneIdea += symb[rand() % (sizeof(symb) - 1)];
	return oneIdea;
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
		for (int i = 0; i < ideas_size; i++)
			_ideas[i] = src._ideas[i];
	return *this;
}

Brain::Brain(const Brain &src)
{
	*this = src;
}

void Brain::printIdeas() const
{
	for (int i = 0; i < ideas_size; i++)
		cout << _ideas[i] << endl;
}

string* Brain::getIdeas()
{
	return _ideas;
}
