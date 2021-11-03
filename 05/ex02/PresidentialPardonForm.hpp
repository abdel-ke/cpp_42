#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

class PresidentialPardonForm
{
private:
	std::string _name;
public:
	PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm const &);
	~PresidentialPardonForm();
	PresidentialPardonForm	&operator=(PresidentialPardonForm const &);
};

#endif
