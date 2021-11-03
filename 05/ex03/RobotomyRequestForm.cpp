#include "RobotomyRequestForm.hpp"

// RobotomyRequestForm::RobotomyRequestForm(): _name(""), _gradeSign(72), _gradeExecute(45)
RobotomyRequestForm::RobotomyRequestForm(): Form("RobotoMy Request", 72, 45)
{
	// std::cout << "Robot Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotoMy Request", 72, 45)
{
	// std::cout << "Robot Constructor" << std::endl;
	this->setTarget(target);
}

// RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj): _name(obj._name), _gradeSign(obj._gradeSign), _gradeExecute(obj._gradeExecute)
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj): Form(obj.getName(), 72, 45)
{
	// std::cout << "Robot Copy constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	// std::cout << "Robot destructor" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(RobotomyRequestForm const &)
{
	// std::cout << "RobotomyRequest Assignment operator" << std::endl;
	return *this;
}

void	RobotomyRequestForm::Action() const
{
	if (time(NULL) % 2)
		std::cout << this->getTarget() << " has been robotomized successfully "  << std::endl;
	else
		std::cout << this->getTarget() << " has been failed "  << std::endl;
}
