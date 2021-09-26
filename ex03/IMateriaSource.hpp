#ifndef CPP_MODULE04_IMATERIASOURCE_HPP
#define CPP_MODULE04_IMATERIASOURCE_HPP


class IMateriaSource
{
public:
	virtual ~IMateriaSource() {}
	virtual void learnMateria(AMateria*) = 0;
	virtual AMateria* createMateria(std::string const & type) = 0;
};


#endif //CPP_MODULE04_IMATERIASOURCE_HPP
