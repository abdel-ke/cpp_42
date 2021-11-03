#include "Form.hpp"

Form::Form() : _name(""), _signed(false),_gradeSign(0) , _gradeExecute(0)
{
	// std::cout << "Form constructor" << std::endl;
}

Form::~Form()
{
	// std::cout << "Form destructor" << std::endl;
}

Form::Form(const Form &obj) : _name(obj._name), _signed(obj._signed), _gradeSign(obj._gradeSign), _gradeExecute(obj._gradeExecute)
{
	// std::cout << "Form copy costructor" << std::endl;
}

Form::Form(std::string name, int gradeSign, int gradeExecute) : _name(name), _signed(false) , _gradeSign(gradeSign),_gradeExecute(gradeExecute)
{
	// std::cout << "Form Parametrized constructor" << std::endl;
}

Form &Form::operator=(const Form &obj)
{
	// std::cout << "Form assignment operator" << std::endl;
	if (this != &obj)
		this->_signed = obj._signed;
	return *this;
}

std::string Form::getName() const
{
	return _name;
}

bool Form::getSigned() const
{
	return _signed;
}

int Form::getGradeExecute() const
{
	return _gradeExecute;
}

int Form::getGradeSign() const
{
	return _gradeSign;
}

std::ostream &operator<<(std::ostream &flux, const Form &obj)
{
	// flux << obj.getName() << " GradeSign " << obj.getGradeSign() << " GradeException " << obj.getGradeException() << std::endl;
	if (obj.getSigned())
		flux << " Name : " << obj.getName() << " SigneGrade : " << obj.getGradeSign() << " ExecuteGrade : " << obj.getGradeExecute() << " Form is signed\n";
	else
		flux << " Name : " << obj.getName() << " SigneGrade : " << obj.getGradeSign() << " ExecuteGrade : " << obj.getGradeExecute() << " Form is not signed\n";
	return flux;
}

void Form::beSigned(Bureaucrat &bure)
{
	if (bure.getGrade() <= _gradeSign)
		_signed = true;
	else
		throw GradeTooLowException();
}

const char *Form::GradeTooHighException::what() const throw()
{
	return "Grade to High";
}

const char *Form::GradeTooLowException::what() const throw()
{
	return "Grade to Low";
}

std::string	Form::getTarget() const
{
	return this->_target;
}

void	Form::setTarget(std::string target)
{
	this->_target = target;
}

const char *Form::FormNotSignedException::what() const throw()
{
	return "Form Not Signed";
}

void	Form::execute(Bureaucrat const & executor) const
{
	if (!getSigned())
		throw FormNotSignedException();
	if (this->getGradeExecute() < executor.getGrade())
		throw GradeTooLowException();
	Action();
}
