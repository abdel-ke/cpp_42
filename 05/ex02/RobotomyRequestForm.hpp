#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>

class RobotomyRequestForm
{
private:
	std::string _name;
	const int _gradeSign;
	const int _gradeExecute;
public:
	RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm const &);
	~RobotomyRequestForm();
	RobotomyRequestForm	&operator=(RobotomyRequestForm const &);
};
#endif
