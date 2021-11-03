#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(): _name(""), _gradeSign(72), _gradeExecute(45)
{
	// std::cout << "Robot Constructor" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obj): _name(obj._name), _gradeSign(obj._gradeSign), _gradeExecute(obj._gradeExecute)
{
	std::cout << "Robot Copy constructor" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	std::cout << "Robot destructor" << std::endl;
}


