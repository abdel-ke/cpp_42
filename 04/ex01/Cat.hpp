#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class	Cat: virtual public Animal
{
	private:
		Brain *br;
	public:
		Cat();
		Cat(const Cat &);
		~Cat();
		Cat	&operator = (const Cat &);
};

#endif
