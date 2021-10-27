#ifndef CHARACTER_HPP
#define CHARACTER_HPP

#include "ICharacter.hpp"

class	Character : public ICharacter
{
	private:
		std::string	_name;
	public:
		Character();
		Character(std::string);
		Character(const Character &);
		~Character();
		Character	&operator = (const Character &);
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void use(int idx, ICharacter& target);
};

#endif
