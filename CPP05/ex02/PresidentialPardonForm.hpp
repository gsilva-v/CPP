#if !defined(PRESIDENTIALPARDONFORM)
# define PRESIDENTIALPARDONFORM

#include <iostream>
#include "Form.hpp"

class PresidentialPardonForm : public Form
{
protected:

public:
	PresidentialPardonForm(std::string name);
	PresidentialPardonForm(const PresidentialPardonForm &ref);
	PresidentialPardonForm	&operator=(PresidentialPardonForm const &ref);
	~PresidentialPardonForm();
	virtual	void execute(Bureaucrat const & executor) const;

};

#endif