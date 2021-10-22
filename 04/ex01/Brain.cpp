#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor" << std::endl;
}

Brain::Brain(const Brain &br)
{
	std::cout << "Brain Copy constructor" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}

Brain	&Brain::operator=(const Brain &obj)
{
	std::cout << "Brain assignment operator called" << std::endl;
}

std::string	Brain::getbrain( void ) const
{
	// return this->ideas;
}

