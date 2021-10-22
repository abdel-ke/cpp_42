#ifndef BRAIN_HPP
#define BRAIN_HPP

#include "Animal.hpp"

class Brain
{
	private:
		std::string	ideas[100];
	public:
		Brain();
		Brain(const Brain br);
		~Brain();
		Brain &operator = (const Brain &);
		std::string	getbrain(void) const;
};

#endif
