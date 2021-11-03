#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("Presidential Pardon", 25, 5)
{
	// std::cout << "Presidential Constructor" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("Presidential Pardon", 25, 5)
{
	// std::cout << "Presidential Parametrized constructor" << std::endl;
	this->setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	// std::cout << "Presidential Destructor" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	(void)&obj;
	return *this;
}

void	PresidentialPardonForm::Action() const
{
	std::cout << this->getTarget() << " has been pardoned  by Zafod Beeblebrox" << std::endl;
}
