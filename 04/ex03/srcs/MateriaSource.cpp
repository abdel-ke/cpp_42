#include "../headers/MateriaSource.hpp"

MateriaSource::MateriaSource() : _counter(0)
{
	//std::cout << "MateriaSource default destructor" << std::endl;
}

MateriaSource::MateriaSource(const MateriaSource &obj)
{
	//std::cout << "MateriaSource Copy constructor" << std::endl;
	*this = obj;
}

MateriaSource	&MateriaSource::operator = (const MateriaSource &obj)
{
	//std::cout << "MateriaSource Operator" << std::endl;
	if (this != &obj)
	{
		_counter = obj._counter;
		for (int i = 0; i < _counter; i++)
			_inventory[i] = _inventory[i]->clone();
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	if (_counter >= 0 && _counter < 4)
		_inventory[_counter++] = materia;
}

AMateria	*MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < _counter; i++)
		if (_inventory[i]->getType() == type)
			return _inventory[i]->clone();
	return 0;
}
