#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
	private:
		AMateria	*_inventory[4];
		int	_counter;
	public:
		MateriaSource();
		MateriaSource(const MateriaSource &);
		~MateriaSource() {}
		MateriaSource	&operator = (const MateriaSource &);

		void learnMateria(AMateria*);
		AMateria* createMateria(std::string const & type);
};

#endif
